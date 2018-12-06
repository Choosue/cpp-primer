#include <string>
#include <iostream>

struct NoName {
    NoName(std::string str): pstring(new std::string(str)), i(0), d(0) { }
    NoName(const NoName &noname): pstring(new std::string(*(noname.pstring))), i(noname.i), d(noname.d)
    {
        std::cout << "string to be copied: " << *(noname.pstring) << std::endl;
        std::cout << "string copied from: " << *pstring << std::endl;
        std::cout << "address of string to be copied: " << noname.pstring << std::endl;
        std::cout << "address of string copied from: " << pstring << std::endl;
        std::cout << "copy finished." << std::endl;
    }
private:
    std::string *pstring;
    int    i;
    double d;
};

int main(int argc, char const *argv[])
{
    NoName noname1("hello");
    NoName noname2 = noname1;
    return 0;
}
