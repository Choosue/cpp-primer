#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string expressions("sfdsfsd(344dkfdl)sdfdfdf(fe9fjklsek)sfsdfsdf(jfksl)");
    stack<char> charStack;
    bool reading;
    for (size_t i = 0; i != expressions.size(); ++i) {
        if (expressions.at(i) == ')') {
            cout << "Read a expression: (";
            while (charStack.top() != '(') {
                cout << charStack.top();
                charStack.pop();
            }
            cout << ")" << endl;
            charStack.pop(); // pop '('
            charStack.push('#'); // replaced
            reading = false;
            continue;
        }
        if (expressions.at(i) == '(') {
            cout << "Start reading" << endl;
            reading = true;
            charStack.push(expressions.at(i));
            continue;
        }
        if (reading) {
            charStack.push(expressions.at(i));
            continue;
        }
    }
    cout << charStack.size() << " expressions are read." << endl;
    return 0;
}
