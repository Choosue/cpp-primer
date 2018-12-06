#include <vector>
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

    vector<int>::reverse_iterator it = ivec.rbegin();
    while (it != ivec.rend()) {
        cout << *it++ << " ";
    }
    cout << endl;
    
    return 0;
}