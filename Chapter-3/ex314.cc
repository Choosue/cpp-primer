#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
    int num;
    string word;
    vector<string> svec;

    cout << "Please input the number of words:" << endl;
    cin >> num;

    cout << "Please input each word:" << endl;
    // 1. Read words into a vector
    for (int i = 0; i < num; i++) {
        cin >> word;
        svec.push_back(word);
    }

    // 2. Transform each word to uppercase letters
    for (vector<string>::iterator iter = svec.begin();
                                  iter != svec.end(); ++iter) {
        for (string::iterator siter = (*iter).begin();
                              siter != (*iter).end(); ++siter) {
            *siter = toupper(*siter);
        }
    }

    // 3. Print the transformed vector, 8 words a line
    for (vector<string>::const_iterator iter = svec.begin();
                                        iter != svec.end(); ++iter) {
        if ((iter - svec.begin()) % 8 == 0) {
            cout << endl;
        }
        cout << *iter << " ";
    }

    return 0;
}