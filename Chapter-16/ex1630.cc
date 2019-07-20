// template <class Type> class C1;
// template <class Type, int size> class C1;
// template <class T, class U, class V> class C2;
// template <class C1, typename C2> class C3 { };
// template <typename myT, class myT2> class C4 { };
template <class Type, int *ptr> class C5;
template <class T, int *pi> class C5;

int main()
{
    return 0;
}
