#include <bitset>
#include <iostream>

int main()
{
    std::bitset<64> bitvec(32);
    std::bitset<32> bv(1010101);
    std::cout << "bitvec = " << bitvec << std::endl;
    std::cout << "bv = " << bv << std::endl;
    std::string bstr;
    std::cin >> bstr;
    std::bitset<8> bsv(bstr);
    std::cout << "bsv = " << bsv << std::endl;
    return 0;
}
