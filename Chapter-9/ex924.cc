#include <vector>
using std::vector;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    if (!ivec.empty()) {
        vector<int>::reference ival = ivec.front();
        vector<int>::reference ival2 = *ivec.begin();
        vector<int>::reference ival3 = ivec[0];
        vector<int>::reference ival4 = ivec.at(0);
    }
    return 0;
}
