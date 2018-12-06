#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    string last_word;
    string word;
    cin >> last_word;
    while (cin >> word) {
        if (word == last_word) {
            if (isupper(word[0])) {
    #ifndef NDEBUG
    cout << "Successfully find the first dup word that begins with an uppercase letter" << endl;
    #endif
                cout << word << " occurs twice in succession" << endl;
                break;
            }
        }
        last_word = word;
    }
    if (word != last_word || !isupper(word[0])) {
        cout << "No word start with uppercase letter was repeated" << endl;
    }

    return 0;
}