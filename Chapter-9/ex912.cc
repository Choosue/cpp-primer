#include <vector>
#include <iostream>
using namespace std;

bool isElemInRange(vector<int>::const_iterator first,
                   vector<int>::const_iterator last,
                   int elem)
{
    while (first != last) {
        if (*first++ == elem) {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(11);
    ivec.push_back(22);
    ivec.push_back(13);
    ivec.push_back(14);
    cout << (isElemInRange(ivec.begin(), ivec.end(), 14) ? "yes" : "no") << endl;
    return 0;
}
