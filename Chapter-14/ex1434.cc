#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class EQ_cls {
public:
    EQ_cls(int val = 0): bound(val) { }
    bool operator()(int val)
        { return val == bound; }
private:
    int bound;
};

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(0);
    ivec.push_back(0);
    ivec.push_back(8);
    ivec.push_back(6);
    std::replace_if(ivec.begin(), ivec.end(), EQ_cls(0), 100);
    
    for(vector<int>::const_iterator it = ivec.begin(); it != ivec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
