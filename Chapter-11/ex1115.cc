#include <vector>
#include <list>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> ilist;
    ilist.push_back(1);
    ilist.push_back(0);
    ilist.push_back(0);
    ilist.push_back(8);
    ilist.push_back(6);
    vector<int> ivec;

    unique_copy(ilist.begin(), ilist.end(), back_inserter(ivec));
    vector<int>::iterator it = ivec.begin();
    while (it != ivec.end()) {
        cout << *it++ << " ";
    }
    cout << endl;
    return 0;
}
