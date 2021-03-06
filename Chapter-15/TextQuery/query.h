#include <iostream>
#include "text_query.h"

class Query_base {
    friend class Query;
protected:
    typedef TextQuery::line_no line_no;
    virtual ~Query_base() { }
private:
    // eval returns the |set| of lines that this Query matches
    virtual std::set<line_no> eval(const TextQuery&) const = 0;
    // display prints the query
    virtual std::ostream& display(std::ostream& = std::cout) const = 0;
};

class Query {
    // these operators need access to the Query_base* constructor
    friend Query operator~(const Query &);
    friend Query operator|(const Query&, const Query&);
    friend Query operator&(const Query&, const Query&);
public:
    Query(const std::string&); // builds a new WordQuery
    // copy control to manage pointers and use counting
    Query(const Query &c): q(c.q), use(c.use) { ++*use; }
    ~Query() { decr_use(); }
    Query& operator=(const Query&);
    // interface functions: will call corresponding Query_base operations
    std::set<TextQuery::line_no> eval(const TextQuery &t) const
        { return q->eval(t); }
    std::ostream &display(std::ostream &os) const
        { return q->display(os); }
private:
    Query(Query_base *query): q(query), use(new std::size_t(1))
        { std::cout << "[Query] Created a Query with use count " + std::to_string(*use) << std::endl; }
    Query_base *q;
    std::size_t *use;
    void decr_use();
};

inline std::ostream&
operator<<(std::ostream &os, const Query &q)
{
    return q.display(os);
}

class WordQuery: public Query_base {
    friend class Query; // Query uses the WordQuery constructor
    WordQuery(const std::string &s): query_word(s)
        { std::cout << "[WordQuery] Created a WordQuery(\"" << s << "\")" << std::endl; }
    // concrete class: WordQuery defines all inherited pure virtual functions
    std::set<line_no> eval(const TextQuery &t) const
        { return t.run_query(query_word); }
    std::ostream& display (std::ostream &os) const
        { return os << query_word; }
    std::string query_word; // word for which to search
};

class NotQuery: public Query_base {
    friend Query operator~(const Query &);
    NotQuery(Query q): query(q) { }
    // concrete class: NotQuery defines all inherited pure virtual functions
    std::set<line_no> eval(const TextQuery&) const;
    std::ostream& display(std::ostream &os) const
        { return os << "~(" << query << ")"; }
    const Query query;
};

class BinaryQuery: public Query_base {
protected:
    BinaryQuery(Query left, Query right, std::string op):
        lhs(left), rhs(right), oper(op)
        { std::cout << "[BinaryQuery] Created a BinaryQuery" << std::endl; }
    // abstract class: BinaryQuery doesn't define eval
    std::ostream& display(std::ostream &os) const
        { return os << "(" << lhs << " " << oper << " " << rhs << ")"; }
    const Query lhs, rhs; // right- and left-hand operands
    const std::string oper; // name of the operator
};

class AndQuery: public BinaryQuery {
    friend Query operator&(const Query&, const Query&);
    AndQuery(Query left, Query right): BinaryQuery(left, right, "&")
        { std::cout << "[AndQuery] Created a AndQuery" << std::endl; }
    // concrete class: And Query inherits display and defines remaining pure virtual
    std::set<line_no> eval(const TextQuery&) const;
};

class OrQuery: public BinaryQuery {
    friend Query operator|(const Query&, const Query&);
    OrQuery(Query left, Query right): BinaryQuery(left, right, "|")
        { std::cout << "[OrQuery] Created a OrQuery" << std::endl; }
    // concrete class: OrQuery inherits display and defines remaining pure virtual
    std::set<line_no> eval(const TextQuery&) const;
};

inline Query operator&(const Query &lhs, const Query &rhs)
{
    return new AndQuery(lhs, rhs);
}

inline Query operator|(const Query &lhs, const Query &rhs)
{
    return new OrQuery(lhs, rhs);
}

inline Query operator~(const Query &oper)
{
    return new NotQuery(oper);
}