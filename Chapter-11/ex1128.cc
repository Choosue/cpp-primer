#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec1;
    list<int> lst;
    for(size_t i = 0; i < 100; i++)
    {
        lst.push_back(i);
    }
    
    reverse_copy(lst.begin(), lst.end(), vec1.begin());
    // reverse_copy(lst.begin(), lst.end(), back_inserter(vec1));
    cout << vec1.size() << endl;
    return 0;
}