#include <vector>
using namespace std;

void f(const vector<int>&);
int main() {
    vector<int> v2;
    f(v2); // should be ok
    f(42); // should be an error
    return 0;
}