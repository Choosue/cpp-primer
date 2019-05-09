#include "query.h"

Query::Query(const std::string& s): q(new WordQuery(s)), use(new std::size_t(1))
{
    std::cout << "[Query] Created a Query with " + s + " and " + std::to_string(*use) << std::endl;
}

void Query::decr_use()
{
    if (--*use == 0) {
        delete q;
        delete use;
        std::cout << "[Query] Deleted a Query" << std::endl;
    }
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