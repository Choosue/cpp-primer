#include <iostream>
#include <string>
using namespace std;

class Sales_item {
public:
    operator std::string() const { return isbn; }
    operator double() const { return revenue; }
    Sales_item(std::string s, double d): isbn(s), revenue(d) {}
private:
    double revenue;
    std::string isbn;
};

int main(int argc, char const *argv[])
{
    Sales_item si("hello", 13.0);
    cout << si << endl;
    cout << string(si) << endl;
    return 0;
}
