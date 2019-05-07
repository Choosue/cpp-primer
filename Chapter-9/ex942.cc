#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<string> strStack;
    string word;
    while (cin >> word) {
        strStack.push(word);
    }
    cout << strStack.size() << endl;
    return 0;
}
