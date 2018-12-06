#include <iostream>

class Foo {
public:
    Foo(int ival): ival_(ival) {}
    int get_int() { return ival_; }
private:
    int ival_;
};

class Bar {
public:
    static Foo FooVal() { ++xval_; return foo_; }
    static int callsFooVall() { return xval_;}
    static int xval_;
    static Foo foo_;
};

int Bar::xval_ = 0;
Foo Bar::foo_ = Foo(10);

int main()
{
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
    std::cout << Bar::FooVal().get_int() << std::endl;
    std::cout << Bar::callsFooVall() << std::endl;
}