#include <iostream>
#include <fstream>
#include <string>
using std::string;
using std::istream;
using std::ifstream;
using std::cout;
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
    ifstream ifs("ex86.txt");
    if (ifs) {
        printWhatYouEnter(ifs);
        ifs.close();
    }
    return 0;
}
