#include <string>
#include <iostream>

class Sales_item {
public:
    // default argument for book is the empty string
    explicit Sales_item(const std::string &book = ""):
                   isbn_(book), units_sold_(0), revenue_(0.0) { }
    explicit Sales_item(std::istream &is);
    // as before
private:
    std::string isbn_;
    int units_sold_;
    double revenue_;
};

int main(int argc, char const *argv[])
{
    std::string null_isbn = "9-999-99999-9";
    Sales_item null1(null_isbn);
    Sales_item null("9-999-99999-9");
    return 0;
}
