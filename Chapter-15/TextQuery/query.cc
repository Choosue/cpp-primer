#include "query.h"

Query::Query(const std::string& s)
{
    std::cout << "Created a WordQuery(\"" << s << "\")" << std::endl;
    Query(new WordQuery(s));
}

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