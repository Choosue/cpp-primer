#include <list>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(0);
    ivec.push_back(0);
    ivec.push_back(8);
    ivec.push_back(6);
    list<int> ilist;
    // replace_copy (ivec.begin(), ivec.end(),
    //               back_inserter(ilist), 0, 42); // output: 1 42 42 8 6
    // replace_copy (ivec.begin(), ivec.end(),
    //               front_inserter(ilist), 0, 42); // output: 6 8 42 42 1
    // replace_copy (ivec.begin(), ivec.end(),
    //               inserter(ilist, ilist.end()), 0, 42); // output: 1 42 42 8 6
    replace_copy (ivec.begin(), ivec.end(),
                  inserter(ilist, ilist.begin()), 0, 42); // output: 1 42 42 8 6
    list<int>::iterator it = ilist.begin();
    while (it != ilist.end()) {
        cout << *it++ << " ";
    }
    cout << endl;
    return 0;
}
