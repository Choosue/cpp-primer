#include <bitset>
#include <iostream>
#include <string>
#include <stdexcept>
using std::overflow_error;
using std::string;
using std::bitset;
using std::cout;
using std::endl;

int main()
{
    string str = "111111111111111111111111111111111111111111111111111111111111111111"; // 66 ones
    bitset<66> bs(str);
    try {
        unsigned long ul = bs.to_ulong();
        cout << ul << endl;
    } catch (overflow_error err) {
        cout << "Converting bitset to unsigned long failed:\n"
             << err.what() << endl;
    }

    return 0;
}