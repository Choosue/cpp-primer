#include <vector>
#include <string>
#include <list>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const vector< int > ivec(10);
    vector< string > svec(10);
    svec[0] = "hello";
    list< int > ilist(10);

    // vector<int>::const_iterator         it = ivec.begin();
    // list<int>::iterator           it = ilist.begin()+2;
    // vector<string>::iterator      it = &svec[0];
    string *s = &svec[0];
    cout << *s << endl;
    // for (vector<string>::iterator it = svec.begin(); it != 0; ++it) // ...
    return 0;
}
