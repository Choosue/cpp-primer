#include <string>
using namespace std;

template <class T, int size> class Array { /* . . . */ };
template <int hi, int wid> class Screen { /* . . . */ };

// const int hi = 40, wi = 80; Screen<hi, wi+32> sObj; // valid
// const int arr_size = 1024; Array<string, arr_size> a1; // valid
// unsigned int asize = 255; Array<int, asize> a2; // invalid
const double db = 3.1415; Array<double, db> a3;

int main()
{
    return 0;
}