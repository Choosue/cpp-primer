#include "ex1324.h"

int main(int argc, char const *argv[])
{
    int obj = 44;
    HasPtr hp1(&obj, 5);
    std::cout << hp1.get_int() << " "
              << hp1.get_ptr() << " "
              << hp1.get_ptr_val() << std::endl;
    HasPtr hp2(hp1);
    std::cout << hp2.get_int() << " "
              << hp2.get_ptr() << " "
              << hp2.get_ptr_val() << std::endl;
    HasPtr hp3(hp1);
    std::cout << hp3.get_int() << " "
              << hp3.get_ptr() << " "
              << hp3.get_ptr_val() << std::endl;
    return 0;
}
