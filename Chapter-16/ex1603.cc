#include <string>
#include <iostream>

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

int main()
{
    // std::cout << compare(std::string("hi"), std::string("world")) << std::endl;
    std::string s1("hi");
    std::string s2("world");
    std::cout << compare(s1, s2) << std::endl;
    return 0;
}