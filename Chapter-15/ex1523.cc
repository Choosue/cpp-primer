#include <string>

struct Base {
    void foo(int);
protected:
    int bar;
    double foo_bar;
};

struct Derived : public Base {
    void foo(std::string);
    bool bar(Base *pb);
    void foobar();
protected:
    // std::string bar;
};

int main()
{
    Derived d;
    d.foo("1024");
    return 0;
}