#include <vector>
#include <list>
#include <utility>
#include <iostream>
using namespace std;

template <class InputIterator, class T>
InputIterator find(pair<InputIterator, InputIterator> iter_pair, const T &val)
{
    while (iter_pair.first != iter_pair.second) {
        if (*iter_pair.first == val) {
            return iter_pair.first;
        }
        ++iter_pair.first;
    }
    return iter_pair.second;
}

int main()
{
    static const int arr[] = {16,2,77,29};
    vector<int> ivec(arr, arr + sizeof(arr) / sizeof(arr[0]) );
    vector<int>::iterator result = find(make_pair(ivec.begin(), ivec.end()), 29);
    cout << *result << endl;

    static const string sarr[] = {"liu", "chu", "shu", "hello"};
    list<string> slist(sarr, sarr + sizeof(sarr) / sizeof(sarr[0]) );
    list<string>::iterator result2 = find(make_pair(slist.begin(), slist.end()), "hello");
    cout << *result2 << endl;
}