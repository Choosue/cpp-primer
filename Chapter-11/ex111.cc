#include <vector>
#include <string>
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
    cout << count(ivec.begin(), ivec.end(), 0) << endl; // 2
    return 0;
}