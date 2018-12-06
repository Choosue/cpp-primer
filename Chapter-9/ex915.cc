#include <list>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<string> svec(10);
    list<string>::iterator first = svec.begin();
    list<string>::iterator last = svec.end();
    while (first != last) {
        cin >> *first++;
    }
    list<string>::const_iterator it = svec.begin();
    for ( ; it != last; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}