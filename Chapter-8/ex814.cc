#include <fstream>
#include <string>
#include <iostream>
using namespace std;

ifstream& open_file(ifstream &in, const string &file)
{
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}

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
    ifstream in;
    printWhatYouEnter(open_file(in, "ex87-1.txt"));
    return 0;
}

// $ cat ex87-1.txt
// This is file ex87-1.txt