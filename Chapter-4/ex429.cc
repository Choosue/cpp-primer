#include <chrono>
#include <string>
#include <iostream>
#include <cstring>
using std::cout;
using std::string;

int main(int argc, char const *argv[])
{
    auto start = std::chrono::high_resolution_clock::now();

    const char *pc = "a very long literal string";
    const size_t len = strlen(pc + 1);
    
    for (size_t ix = 0; ix < 1000000; ++ix) {
        char *pc2 = new char[len + 1];
        strcpy(pc2, pc);
        if (strcmp(pc2, pc))
            ;
        delete [] pc2;
    }
    // string str("a very long literal string");

    
    // for (int ix = 0; ix < 1000000; ++ix) {
    //     string str2 = str;
    //     if (str != str2)
    //         ;
    // }

    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    return 0;
}
