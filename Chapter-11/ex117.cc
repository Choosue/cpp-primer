#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec;
    vec.reserve(10);
    // fill_n(back_inserter(vec), 10, 0);
    fill_n(vec.begin(), 10, 0);
    vector<int>::iterator it = vec.begin();
    while (it != vec.end()) {
        cout << *it++ << endl;
    }
    return 0;
}