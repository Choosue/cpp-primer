#include <vector>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;

vector<int>::const_iterator find_val(
    vector<int>::const_iterator beg,
    vector<int>::const_iterator end,
    int value,
    vector<int>::size_type occurs)
{
    vector<int>::const_iterator res_iter = end;
    occurs = 0;
    for ( ; beg != end; ++beg) {
        if (*beg == value) {
            if (res_iter == end) {
                res_iter = beg;
            }
            ++occurs;
        }
    }
    return res_iter;
}

int main(int argc, char const *argv[])
{
    int input;
    vector<int>::size_type occur;
    vector<int> ivec = {6, 1, 1, 2, 9, 5, 5};
    vector<int>::const_iterator res;
    res = find_val(ivec.begin(), ivec.end(), 1, occur);
    cout << *res << " occurs "
         << occur << " times" << endl;
    return 0;
}
// g++ ex79.cc -o ex79 -std=c++11