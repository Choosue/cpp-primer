#include <iostream>
#include <string>

template <class T> class Foo {
public:
    static std::size_t count() { return ctr; }
    // other interface members
private:
    static std::size_t ctr;
    // other implementation members
};

template <class T>
std::size_t Foo<T>::ctr = 1;

int main()
{
    Foo<int> fi, fi2, fi3;
    size_t ct = Foo<int>::count();
    std::cout << ct << std::endl;
    Foo<std::string> fs;
    std::cout << fi.count() << std::endl;
    std::cout << fi2.count() << std::endl;
    std::cout << fi3.count() << std::endl;
    std::cout << fs.count() << std::endl;
    return 0;
}