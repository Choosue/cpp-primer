#include <iostream>
#include <vector>
using namespace std;

template <typename Container>
void PrintElements(Container &container)
{
    typename Container::size_type i;
    typename Container::size_type size = container.size();

    for (i = 0; i != size; ++i) {
        cout << container[i] << " ";
    }
    cout << endl;
}

int main()
{
    static const int arr[] = {16,2,77,88,29,2,88,88};
    vector<int> ivec(arr, arr + sizeof(arr) / sizeof(arr[0]) );
    PrintElements(ivec);
    return 0;
}