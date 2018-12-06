#include <iostream>
using std::cout;
using std::endl;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char const *argv[])
{
    int ival1 = 5;
    int ival2 = 6;
    int *a = &ival1;
    int *b = &ival2;
    swap(a, b);
    cout << *a << " and " << *b << endl;
    return 0;
}
