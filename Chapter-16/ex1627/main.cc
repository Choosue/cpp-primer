#include "find_median.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec = {1, 2, 3, 3, 3, 3, 4, 6, 5, 7};
    vector<int>::const_iterator ret = find_median(ivec);
    cout << ( (ret != ivec.end()) ? to_string(*ret) : "No median" ) << endl;
    return 0;
}