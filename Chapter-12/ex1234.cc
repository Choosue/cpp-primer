#include "Sales_item.h"

int main()
{
    Sales_item item1("999", 15, 1);
    Sales_item item2("989", 1, 10);
    Sales_item result = add_items(item1, item2);
    return 0;
}