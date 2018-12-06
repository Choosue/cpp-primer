#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <fstream>
using namespace std;

ifstream& open_file(ifstream &in, const string &file) {
    in.close(); // close in case it was already open
    in.clear(); // clear any existing errors
    // if the open fails, the stream will be in an invalid state
    in.open(file.c_str()); // open the file we were given
    return in; // condition state is good if open succeeded
}

int main(int argc, char const *argv[])
{
    set<string> exclusions;
    ifstream exclusionFile;
    string exclusion;
    if (!open_file(exclusionFile, "exclusion.txt")) {
        throw runtime_error("no exclusion file");
    }
    while (exclusionFile >> exclusion) {
        exclusions.insert(exclusion);
    }

    ifstream pluralFile;
    string plural;
    if (!open_file(pluralFile, "plural.txt")) {
        throw runtime_error("no plural file");
    }
    while (pluralFile >> plural) {
        if (!exclusions.count(plural)) {
            cout << plural.substr(0, plural.size() - 1) << endl;
        } else {
            cout << plural << endl;
        }
    }
    return 0;
}
