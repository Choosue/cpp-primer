#include <string>

class Item_base {
public:
    Item_base(const std::string &book = "",
              double sales_price = 0.0):
              isbn(book), price(sales_price) { }
    std::string book() const { return isbn; }
    virtual double net_price(std::size_t n) const
        { return n * price; }
private:
    std::string isbn;
protected:
    double price;
};

class Disc_item : public Item_base {
public:
    double net_price(std::size_t) const = 0;
};

class Bulk_item : public Disc_item {
public:
    double net_price(std::size_t) const;
};

int main()
{
    Disc_item disc_item;
    return 0;
}