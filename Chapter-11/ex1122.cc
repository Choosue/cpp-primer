#include <vector>
#include <list>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    ivec.push_back(4);
    ivec.push_back(5);
    ivec.push_back(6);
    ivec.push_back(7);
    ivec.push_back(8);
    ivec.push_back(9);
    ivec.push_back(10);
    list<int> ilist;

    copy(ivec.rbegin() + 3, ivec.rend() - 2, back_inserter(ilist));
    list<int>::iterator it = ilist.begin();
    while (it != ilist.end()) {
        cout << *it++ << " ";
    }
    cout << endl;

    return 0;
}