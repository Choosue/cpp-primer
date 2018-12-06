#include <vector>
#include <iostream>

int main(int argc, char const *argv[])
{
    std::vector<int> ivec = std::vector<int>(42);
    std::cout << *(ivec.begin()) << std::endl;
    return 0;
}
