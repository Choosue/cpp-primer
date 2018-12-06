// ex733.cc
// g++ Sales_item.cc ex733.cc -o ex733

#include "Sales_item.h"

int main(int argc, char const *argv[])
{
    Sales_item total, trans;
    if (total.input_item()) {
        while (trans.input_item()) {
            if (!total.add_item(trans)) {
                total.output_item();
                total = trans;
            }
        }
    } else {
        std::cout << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}