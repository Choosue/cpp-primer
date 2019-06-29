#include <iostream>
using namespace std;

template <class T1, class T2, class T3> T1 sum(T2 a, T3 b)
{
    return a + b;
}

int main()
{
    double dobj1 = 2.2, dobj2 = 3.3;
    float fobj1 = 1.2, fobj2 = 3.4;
    char cobj1 = 'M', cobj2 = 'S';

    cout << sum<double>(dobj1, dobj2) << endl;
    cout << sum<double, double, double>(fobj1, fobj2) << endl;
    cout << sum<int>(cobj1, cobj2) << endl;
    cout << sum<double, double>(fobj2, dobj2) << endl;
    
    return 0;
}