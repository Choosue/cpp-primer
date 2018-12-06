#include <list>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

ifstream& open_file(ifstream &in, const string &file) {
    in.close(); // close in case it was already open
    in.clear(); // clear any existing errors
    // if the open fails, the stream will be in an invalid state
    in.open(file.c_str()); // open the file we were given
    return in; // condition state is good if open succeeded
}

int main(int argc, char *argv[])
{
    list<string> slist;
    ifstream infile;
    string str;
    if (argc < 2 || !open_file(infile, argv[1])) {
        cerr << "No input file!" << endl;
        return EXIT_FAILURE;
    }

    while (infile >> str) {
        slist.push_back(str);
    }

    slist.sort();
    slist.unique();

    list<string>::iterator it = slist.begin();
    while (it != slist.end()) {
        cout << *it++ << " ";
    }
    cout << endl;
    return 0;
}