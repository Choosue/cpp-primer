#include <iostream>
using namespace std;

template <typename T> T abs(const T& a)
{
    return a > 0 ? a : 0 - a;
}

int main()
{
    double a = -0.111;
    char b = '1';
    int c = -1;
    cout << abs(a) << endl;
    cout << abs(c) << endl;
    cout << abs(b) << endl;
    return 0;
}