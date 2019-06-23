#include <iostream>
using namespace std;

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

template <typename A, typename B>
int compare_normal_conversion(const A &v1, const B &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main()
{
    cout << compare(1, 2) << endl;
    // Compiler will not cast '1' automatically to double type
    // cout << compare(1, 2.2) << endl;
    cout << compare_normal_conversion(10, 2.2) << endl;
    return 0;
}