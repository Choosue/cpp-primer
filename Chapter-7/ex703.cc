#include <iostream>
using std::cout;
using std::endl;

int power(int base, int index)
{
    int result = 1;
    for (int i = 0; i < index; ++i) {
        result *= base;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    cout << power(5, 3) << endl;
    return 0;
}
