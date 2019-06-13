#include <iostream>
using namespace std;

template <class T, class U, typename V> void f1(T, U, V);
template <class T> T f2(T &t);
template <class T> inline T foo(T, unsigned int*);
template <class T> T f4 (T, T);
typedef char Ctype;
template <typename Ctype> Ctype f5(Ctype a)
{
    return a;
}

int main()
{
    cout << f5("Hello") << endl;
    return 0;
}