#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    list<int> ilist;
    ilist.push_back(1);
    ilist.push_back(5);
    ilist.push_back(3);
    ilist.push_back(2);
    ilist.push_back(0);
    // sort(ilist.begin(), ilist.end());
    ilist.sort();

    list<int>::iterator it = ilist.begin();
    while (it != ilist.end()) {
        cout << *it++ << " ";
    }
    cout << endl;
    return 0;
}