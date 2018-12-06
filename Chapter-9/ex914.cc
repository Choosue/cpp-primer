#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> svec(10);
    vector<string>::iterator first = svec.begin();
    vector<string>::iterator last = svec.end();
    while (first != last) {
        cin >> *first++;
    }
    vector<string>::const_iterator it = svec.begin();
    for ( ; it != last; ++it) {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}