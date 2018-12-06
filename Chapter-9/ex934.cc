#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "hello";
    string::iterator it = s.begin();
    for ( ; it != s.end(); ++it) {
        *it = toupper(*it);
        cout << *it;
    }
    cout << endl;
    return 0;
}
