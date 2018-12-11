#include "ex1326.h"
#include <iostream>

int main()
{
    HasPtr hp1(10, 20);
    HasPtr hp2(hp1);
    std::cout << hp2.get_ptr() << " "
              << hp2.get_ptr_val() << " "
              << hp2.get_int() << std::endl;
    return 0;
}