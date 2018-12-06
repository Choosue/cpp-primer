#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    cout << "ivec.size() = " << ivec.size() << endl;
    cout << "ivec.capacity() = " << ivec.capacity() << endl;
    ivec.push_back(1);
    cout << endl;
    cout << "pushed 1 into vector" << endl;
    cout << "ivec.size() = " << ivec.size() << endl;
    cout << "ivec.capacity() = " << ivec.capacity() << endl;
    ivec.push_back(2);
    ivec.push_back(3);
    ivec.push_back(4);
    cout << endl;
    cout << "pushed 2,3,4 into vector" << endl;
    cout << "ivec.size() = " << ivec.size() << endl;
    cout << "ivec.capacity() = " << ivec.capacity() << endl;
    for (int i = 5; i < 100; ++i) {
        ivec.push_back(i);
    }
    cout << endl;
    cout << "pushed 5 to 99 into vector" << endl;
    cout << "ivec.size() = " << ivec.size() << endl;
    cout << "ivec.capacity() = " << ivec.capacity() << endl;
    for (int i = 100; i < 130; ++i) {
        ivec.push_back(i);
    }
    cout << endl;
    cout << "pushed 100 to 129 into vector" << endl;
    cout << "ivec.size() = " << ivec.size() << endl;
    cout << "ivec.capacity() = " << ivec.capacity() << endl;
    return 0;
}
