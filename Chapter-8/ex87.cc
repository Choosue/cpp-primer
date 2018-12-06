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
    files.push_back("ex87-2,txt");
    files.push_back("ex87-3.txt");
    vector<string>::const_iterator it = files.begin();
    while (it != files.end()) {
        input.open(it->c_str());
        if (!input) {
            cerr << "File "
                 << *it << " cannot be opened."
                 << endl;
            // input.clear(); // no need to clear the stream
            ++it;
            continue;
        }
        printWhatYouEnter(input);
        input.close();
        input.clear();
        ++it;
    }
    return 0;
}