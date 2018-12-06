#include <string>
#include <map>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> word_count;
    string input;
    while (cin >> input) {
        pair< map<string, int>::iterator, bool> ret = word_count.insert(make_pair(input, 1));
        if (!ret.second) {
            ++ret.first->second;
        }
    }
    map<string, int>::iterator it = word_count.begin();
    for (; it != word_count.end(); ++it) {
        cout << it->first << ": " << it->second << " times" << endl;
    }
    return 0;
}
