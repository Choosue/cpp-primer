#include <iostream>
using namespace std;

// void printValues(const int *beg, const int *end)
// {
//     while (beg != end) {
//         cout << *beg++ << endl;
//     }
// }

template <class T, size_t N>
void printValues(T (&parm)[N])
{
    for (size_t i = 0; i < N; ++i) {
        cout << parm[i] << endl;
    }
}

int main()
{
    static const int arr[] = {16,2,77,88,29,2,88};
    printValues(arr);
    return 0;
}