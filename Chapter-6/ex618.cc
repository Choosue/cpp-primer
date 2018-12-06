#include <string>
#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;

void report(string s1, string s2) {
    cout << s1 << " is lexicographically less than "
         << s2 << endl;
}

int main(int argc, char const *argv[])
{
    string str1, str2;
    do {
        cout << "Input two strings (enter # to quit): ";
        cin >> str1;
        if (str1 == "#") {
            break;
        }
        cin >> str2;
        if (str1 < str2) {
            report(str1, str2);
        } else {
            report(str2, str1);
        }
    } while (cin);
    return 0;
}
