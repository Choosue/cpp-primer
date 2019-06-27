#include <iostream>
using namespace std;

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main()
{
    int ival = 10;
    short shval = 20;
    cout << compare(static_cast<short>(ival), shval) << endl;
    return 0;
}