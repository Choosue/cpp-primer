#include <string>
#include <fstream>

class NoName {
public:
    NoName(const std::string &name, int ival, double *pd, std::ifstream &ifs):
    name_(name), ival_(ival), pd_(pd), ifs_(ifs) {}
private:
    const std::string name_;
    int ival_;
    double *pd_;
    std::ifstream &ifs_;
};

int main(int argc, char const *argv[])
{
    double dval = 0.0;
    std::ifstream ifs;
    NoName noname("NoName", 0, &dval, ifs);
    return 0;
}
