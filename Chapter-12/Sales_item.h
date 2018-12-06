// Sales_item.h
#include <string>
#include <iostream>

class Sales_item {
public:
    double avg_price() const;
    bool same_isbn(const Sales_item &rhs) const
    {
        return isbn_ == rhs.isbn_;
    }
    Sales_item(): units_sold_(0), revenue_(0.0) { }
    Sales_item(std::string isbn, unsigned units_sold, double revenue):
    isbn_(isbn), units_sold_(units_sold), revenue_(revenue) {}
    bool input_item();
    void output_item() const;
    bool add_item(const Sales_item &item);
private:
    std::string isbn_;
    unsigned units_sold_;
    double revenue_;
    friend Sales_item& add_items(Sales_item &item1, Sales_item &item2)
    {
        if (item1.same_isbn(item2)) {
            item1.revenue_ += item2.revenue_;
            item1.units_sold_ += item2.units_sold_;
        }
        std::cout << item1.units_sold_ << std::endl;
        std::cout << item1.revenue_ << std::endl;
        return item1;
    }
};