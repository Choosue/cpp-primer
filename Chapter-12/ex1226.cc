#include <string>
#include <iostream>

class Sales_item {
public:
    Sales_item(const std::string &book = ""):
    isbn_(book), units_sold_(0), revenue_(0.0) {
        std::cout << "used default string argument";
    }
    Sales_item(std::istream &is = std::cin) {
        std::cout << "used default istream argument";
    };
private:
    std::string isbn_;
    int units_sold_;
    double revenue_;
};

int main(int argc, char const *argv[])
{
    Sales_item item;
    return 0;
}
