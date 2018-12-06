#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::istream;
using std::ifstream;
using std::cout;
using std::cerr;
using std::endl;

istream &printWhatYouEnter(istream &is)
{
    string input;
    while (is >> input) {
        cout << input << endl;
    }
    is.clear();
    return is;
}

int main(int argc, char const *argv[])
{
    ifstream input;
    vector<string> files;
    files.push_back("ex87-1.txt");
    files.push_back("ex87-2.txt");
    files.push_back("ex87-3.txt");
    vector<string>::const_iterator it = files.begin();
    while (it != files.end()) {
        input.open(it->c_str());
        if (!input) {
            cerr << "File "
                 << *it << " cannot be opened."
                 << endl;
        } else {
            printWhatYouEnter(input);
            input.close();
            input.clear();
        }
        ++it;
    }
    return 0;
}

// $ cat ex87-1.txt
// This is file ex87-1.txt
// $ cat ex87-2.txt
// This is another file, but named ex87-2.txt
// $ cat ex87-3.txt
// Ok, this is the last file ex87-3.txt