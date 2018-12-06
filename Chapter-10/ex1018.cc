#include <string>
#include <vector>
#include <iostream>
#include <map>
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
    if (argc != 2) {
        throw runtime_error("wrong number of arguments");
    }

    map<string, vector<string> > familyChildren;
    ifstream surnameFile, firstnameFile;
    string surname, firstname;

    if (!open_file(surnameFile, "surname.txt")) {
        throw runtime_error("no surname file");
    }
    while (surnameFile >> surname) {
        vector<string> children;
        if (!open_file(firstnameFile, "firstname.txt")) {
            throw runtime_error("no firstname file");
        }
        while (firstnameFile >> firstname) {
            children.push_back(firstname);
        }
        familyChildren.insert(make_pair(surname, children));
    }

    // Test
    map<string, vector<string> >::iterator mapIt;
    mapIt = familyChildren.find(argv[1]);
    if (mapIt != familyChildren.end()) {
        vector<string> children = mapIt->second;
        vector<string>::iterator it = children.begin();
        for (; it != children.end(); ++it) {
            cout << *it << " " << mapIt->first << endl;
        }
    } else {
        cout << argv[1] << " not found!" << endl;
    }

    return 0;
}
