#include "Queue.h"
#include <vector>

int main()
{
    short a[4] = { 0, 3, 6, 9 };
    // instantiates Queue<int>::Queue(short *, short *)
    Queue<int> qi(a, a + 4); // copies elements from a into qi
    std::cout << qi << std::endl;
    std::vector<int> vi(a, a + 3);
    // instantiates Queue<int>::assign(vector<int>::iterator,
    //                                 vector<int>::iterator)
    qi.assign(vi.begin(), vi.end());
    std::cout << qi << std::endl;

    return 0;
}