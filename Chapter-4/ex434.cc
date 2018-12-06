#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    size_t num;
    vector<string> svec;
    string input;

    cout << "Input number of strings: ";
    cin >> num;

    cout << "Input each string: ";
    for (size_t i = 0; i < num; ++i) {
        cin >> input;
        svec.push_back(input);
    }

    char **sarr = new char*[num];
    for (size_t i = 0; i < num; ++i) {
        size_t size = svec[i].size();
        char *str = new char[size + 1];
        for (size_t j = 0; j < size; ++j) {
            str[j] = svec[i][j];
        }
        str[size] = 0;
        sarr[i] = str;
        cout << sarr[i] << " ";
    }
    cout << endl;

    for (size_t i = 0; i < num; ++i) {
        delete [] sarr[i];
    }
    delete [] sarr;
    return 0;
}
