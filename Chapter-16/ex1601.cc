#include <iostream>
using namespace std;

template <typename T> T abs(const T& a)
{
    return a > 0 ? a : 0 - a;
}

int main()
{
    string a = "123";
    char b = '1';
    int c = -1;
    cout << abs(a) << endl;
    cout << abs(b) << endl;
    cout << abs(c) << endl;
    return 0;
}