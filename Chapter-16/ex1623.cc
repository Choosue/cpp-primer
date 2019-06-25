#include <iostream>     // std::cout
#include <algorithm>    // std::max
using namespace std;

int main()
{
    int ival = 10;
    double dval = 20.2;
    cout << max<double>(ival, dval) << endl;
    cout << max<int>(ival, dval) << endl;
    return 0;
}