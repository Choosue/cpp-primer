#include <iostream>
#include <vector>

struct Exmpl {
    Exmpl()
    {
        std::cout << "Exmpl()" << std::endl;
    }
    Exmpl(const Exmpl&)
    {
        std::cout << "Exmpl(const Exmpl&)" << std::endl;
    }
    ~Exmpl()
    {
        std::cout << "~Exmpl()" << std::endl;
    }
};

void func1(Exmpl exmpl) // calls copy constructor Exmpl(const Exmpl&)
{

} // calls destructor ~Exmpl()

void func2(Exmpl& exmpl) { } // calls no copy-control members

int main(int argc, char const *argv[])
{
    Exmpl exmpl; // calls constructor Exmpl()
    func1(exmpl);
    func2(exmpl);
    Exmpl *p = new Exmpl(); // calls constructor Exmpl()
    delete p;  // calls destructor ~Exmpl(), if not delete explicitly, the object pointed to by p will not be destructed
    std::vector<Exmpl> vec;
    vec.push_back(exmpl); // calls copy constructor Exmpl(const Exmpl&), the element copied will be destructed by the end
    return 0;
} // calls destructor ~Exmpl()
