#include <string>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<char*> slist;
    slist.push_back("hello");
    slist.push_back("hi");
    slist.push_back("world");
    slist.push_back("welcome");

    vector<string> svec;
    svec.assign(slist.begin(), slist.end());

    vector<string>::iterator it = svec.begin();
    for ( ; it != svec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
