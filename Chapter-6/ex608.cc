#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;

int main()
{
    int vowelCnt = 0;
    string input;
    cin >> input;
    for (size_t ix = 0; ix != input.size(); ++ix) {
        switch (input[ix])
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case ' ': case '\t': case '\n':
                cout << "\'" << input[ix] << "\'" << endl;
                ++vowelCnt;
                break;
        }
    }
    cout << "There are " << vowelCnt << " vowels and other chars." << endl;
    return 0;
}