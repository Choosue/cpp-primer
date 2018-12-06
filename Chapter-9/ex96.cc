#include <list>
#include <iostream>
using namespace std;

class Foo {
public:
    Foo(int i)
    {
        num = i;
    }
    int getNum() const
    {
        return num;
    }
private:
    int num;
};

int main(int argc, char const *argv[])
{
    list<Foo> fooList(10, 2);
    list<Foo>::const_iterator it = fooList.begin();
    for ( ; it != fooList.end(); ++it) {
        cout << it->getNum() << endl;
    }
    return 0;
}
