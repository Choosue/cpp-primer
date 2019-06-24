#include <iostream>

#define UNUSED(x) (void)(x)

template <class Type>
Type calc(const Type* array, int size)
{
    if (size > 0) return array[0];
    return -1;
};

template <class Type>
Type fcn(Type p1,Type p2)
{
    return p1 + p2;
};

int main()
{
    double dobj;
    float fobj = 0.0;
    char cobj = '\0';
    int ai[5] = { 511, 16, 8, 63, 34 };

    UNUSED(dobj);
    UNUSED(fobj);
    UNUSED(cobj);
    calc(ai, 'c');
    calc(ai, fobj);
    fcn(cobj, cobj);
    return 0;
}
