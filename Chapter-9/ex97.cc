#include <list>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> lst1;
    lst1.push_back(1);
    lst1.push_back(2);
    lst1.push_back(15);
    lst1.push_back(3);
    lst1.push_back(9);
    list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
    // while (iter1 != iter2) {
    //     cout << *iter1++ << endl;
    // }
    while (iter1 != iter2) {
        cout << *(--iter2) << endl;
    }
    return 0;
}
