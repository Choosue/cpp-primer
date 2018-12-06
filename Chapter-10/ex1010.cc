#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> map1;
    map<string, int>::key_type key1 = "hello";
    map<string, int>::mapped_type value1 = 1;
    map1[key1] = value1;
    return 0;
}
