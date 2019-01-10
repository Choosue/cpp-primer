#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class isOfLength {
public:
    isOfLength(size_t val = 0): bound(val) { }
    bool operator()(const string &s)
        { return s.size() == bound; }
private:
    string::size_type bound;
};

int main(int argc, char const *argv[])
{
    vector<string> words;
    words.push_back("hello");
    words.push_back("world");
    words.push_back("liu");
    words.push_back("chu");
    words.push_back("shu");
    for (size_t i = 0; i != 11; ++i) {
        cout << count_if(words.begin(), words.end(), isOfLength(i))
             << " words " << i
             << " characters" << endl;
    }
    
    return 0;
}
