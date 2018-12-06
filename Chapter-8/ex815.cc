#include <sstream>
#include <iostream>
#include <string>
using namespace std;

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
    istringstream iss("Hello World!");
    printWhatYouEnter(iss);
    return 0;
}

// $ cat ex87-1.txt
// This is file ex87-1.txt