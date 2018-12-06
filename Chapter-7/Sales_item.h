// Sales_item.h
#include <string>
#include <iostream>

class Sales_item {
public:
    double avg_price() const;
    bool same_isbn(const Sales_item &rhs) const
    {
        return isbn == rhs.isbn;
    }
    Sales_item(): units_sold(0), revenue(0.0) { }
    bool input_item();
    void output_item() const;
    bool add_item(const Sales_item &item);
private:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};