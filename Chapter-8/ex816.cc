#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Read from file, return pointer to a string vector
// vector should be freed outside the function
vector<string>* readFromFile(string file)
{
    ifstream stream(file.c_str()); // open the file
    string line;
    vector<string> *pSvec = new vector<string>();
    while (getline(stream, line)) {
        pSvec->push_back(line);
    }
    return pSvec;
}

// Read from vector returned by readFromFile
// cout each word in each line
void readFromVector(vector<string> *svec)
{
    vector<string>::iterator it = svec->begin();
    string word;
    for ( ; it != svec->end(); ++it) {
        istringstream stream(*it);
        while (stream >> word) {
            cout << word << endl;
        }
    }
    delete svec; // free vector
}

int main(int argc, char const *argv[])
{
    readFromVector(readFromFile("ex89.txt"));
    return 0;
}

// $ cat ex89.txt
// This is exercise 8.9
// You should write a program
// to read this file
// line by line
// or word by word