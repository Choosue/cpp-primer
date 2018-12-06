// Sales_item.cc
#include "Sales_item.h"

double Sales_item::avg_price() const
{
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

bool Sales_item::input_item()
{
    if (std::cin >> isbn &&
        std::cin >> units_sold &&
        std::cin >> revenue) {
            return true;
        }
    return false;
}

void Sales_item::output_item() const
{
    std::cout << isbn << " ";
    std::cout << units_sold << " ";
    std::cout << revenue << " ";
    std::cout << Sales_item::avg_price() << std::endl;
}

bool Sales_item::add_item(const Sales_item &item)
{
    if (Sales_item::same_isbn(item)) {
        units_sold += item.units_sold;
        revenue += item.revenue;
        return true;
    } else {
        std::cout << "Not the same isbn!" << std::endl;
        return false;
    }
}