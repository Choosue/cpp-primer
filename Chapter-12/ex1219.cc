#include <string>
#include <iostream>

class NoName {
public:
    NoName(); // initial values for none
    NoName(const std::string &str, int int_val, double d_val):
    pstring(new std::string(str)), ival(int_val), dval(d_val) {} // initial values for all
// private:
    std::string *pstring;
    int ival;
    double dval;
};

int main()
{
    std::string str = "hello";
    NoName no_name(str, 11, 2.2);
    std::cout << *no_name.pstring << std::endl;
    std::cout << no_name.ival << std::endl;
    std::cout << no_name.dval << std::endl;
    return 0;
}