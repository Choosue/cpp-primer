#include <iostream>
#include <cstring>
using std::cin;
using std::cout;
using std::endl;
int main(int argc, char const *argv[])
{
    const int strSize = 11; // 10 characters plus one null
    char a[strSize];
    char b[strSize];
    cout << "Input first string(10 chars most): ";
    cin >> a;
    cout << "Input secend string(10 chars most): ";
    cin >> b;
    if (strcmp(a, b) == 0) {
        cout << "a(" << a << ") and b(" 
             << b << ") are equal" << endl;
    } else {
        cout << "a(" << a << ") and b(" 
             << b << ") are different" << endl;
    }
    return 0;
}
