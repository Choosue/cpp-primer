#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> ilist(10, 0);
    list<int>::reverse_iterator it = find(ilist.rbegin(), ilist.rend(), 0);
    cout << *it << endl;
    return 0;
}