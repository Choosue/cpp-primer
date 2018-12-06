#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

vector<string> fileToStrVec(string filename) {
    ifstream input(filename.c_str());
    string s;
    vector<string> svec;
    if (!input) {
        cerr << "File " << filename
             << " cannot be opened." << endl;
        return svec;
    }
    while (getline(input, s)) {
        svec.push_back(s);
    }
    input.close();
    return svec;
}

int main(int argc, char const *argv[])
{
    vector<string> svec = fileToStrVec("ex89.txt");
    vector<string>::const_iterator it = svec.begin();
    for ( ; it != svec.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}