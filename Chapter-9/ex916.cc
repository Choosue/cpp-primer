#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    ivec.push_back(4);
    ivec.push_back(5);
    for (vector<int>::size_type i = 0; i != ivec.size(); ++i) {
        cout << ivec[i] << endl;
    }
    return 0;
}
