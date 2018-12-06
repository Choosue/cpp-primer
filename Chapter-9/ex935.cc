#include <string>
#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char const *argv[])
{
    string s = "HelLo";
    string::iterator it = s.begin();
    while (it != s.end()) {
        if (isupper(*it)) {
            it = s.erase(it);
            continue;
        }
        ++it;
    }
    it = s.begin();
    for ( ; it != s.end(); ++it) {
        cout << *it;
    }
    cout << endl;
    return 0;
}
