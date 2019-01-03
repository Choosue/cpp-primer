#include <iostream>

struct IfThenElse {
    int operator() (bool first, int second, int third)
    {
        return first ? second : third;
    }
};

int main(int argc, char const *argv[])
{
    IfThenElse test;
    std::cout << test((3 + 1 == 4), 10, 20) << std::endl;
    return 0;
}
