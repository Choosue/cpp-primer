#include <string>
#include <iostream>

struct ConcreteBase {
    static std::size_t object_count();
protected:
    static std::size_t obj_count;
};
struct C1 : public ConcreteBase { /* . . . */ };
struct C2 : public ConcreteBase {
    void f(const C2&, const C1&);
};

void C2::f(const C2 &c2, const C1 &c1)
{
    // std::cout << ConcreteBase::obj_count() << std::endl;
    // std::cout << C2::obj_count() << std::endl;
    c2.object_count();
    // std::cout << c2.obj_count << std::endl;
    c1.object_count();
    // std::cout << c1.obj_count << std::endl;
    // std::cout << object_count() << std::endl;
}

int main(int argc, char const *argv[])
{
    C2 c2;
    C1 c1;
    c2.f(c2, c1);
    return 0;
}
