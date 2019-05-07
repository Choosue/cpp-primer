#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> word_count;
    string input;
    while (cin >> input) {
        ++word_count[input];
    }
    map<string, int>::iterator it = word_count.begin();
    for (; it != word_count.end(); ++it) {
        cout << it->first << ": " << it->second << " times" << endl;
    }
    return 0;
}
