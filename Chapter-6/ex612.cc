#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    string input;
    vector<string> svec;
    while (cin >> input) {
        svec.push_back(input);
    }

    int max_rep_count = 1;
    string max_rep_word = *(svec.begin());
    for (vector<string>::iterator iter = svec.begin();
                                  iter != svec.end();
                                ++iter)
    {
        int rep_count = 1;
        string rep_word = *iter;
        for (vector<string>::iterator rep_iter = iter + 1;
                                      rep_iter != svec.end();
                                    ++rep_iter)
        {
            if (*rep_iter == *iter) {
                ++rep_count;
                rep_word = *iter;
                iter = rep_iter;
            } else {
                break;
            }
        }
        if (rep_count > 1) {
            cout << "Found a rep word: \"" << rep_word
                 << "\", repeats " << rep_count << " times."
                 << endl;
        }
        if (rep_count > max_rep_count) {
            cout << rep_word
                 << "(" << rep_count << ")"
                 << " repeats more than "
                 << max_rep_word
                 << "(" << max_rep_count << ")" << endl;
            max_rep_count = rep_count;
            max_rep_word = rep_word;
        }
    }

    if (max_rep_count > 1) {
        cout << endl
            << max_rep_word
            << " repeats " << max_rep_count << " times"
            << ", the most."
            << endl;
    } else {
        cout << "There is no rep word." << endl;
    }
    return 0;
}
