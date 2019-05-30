#include "query.h"

int main()
{
    std::ifstream test_file("test.txt");
    TextQuery tq;
    tq.read_file(test_file);
    Query q = Query("fiery") & Query("bird") | Query("wind");
    std::cout << q << std::endl;
    std::set<TextQuery::line_no> result = q.eval(tq);
    std::set<TextQuery::line_no>::const_iterator it;
    for (it = result.begin(); it != result.end(); ++it) {
        std::cout << "[line " + std::to_string(*it) + "] " + tq.text_line(*it) << std::endl;
    }
    return 0;
}