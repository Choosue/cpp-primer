#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<string> slist;
    slist.push_back("hello");
    slist.push_back("world");
    slist.push_back("chushu");
    list<string>::const_iterator it = slist.begin();
    for ( ; it != slist.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
