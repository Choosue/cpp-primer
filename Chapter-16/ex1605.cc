#include <iostream>
using namespace std;

template <typename T>
T &get_larger(T &v1, T &v2)
{
    return v1 > v2 ? v1 : v2;
}

int main()
{
    int first = 2, second = 1;
    int ret = get_larger(first, second);
    cout << ret << endl;
    return 0;
}