#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main(int argc, char const *argv[])
{
    int num, input;
    vector<int> ivec;
    cout << "Input number of ints to read: ";
    cin >> num;
    cout << "Input ints seperated by space: ";
    for (int i = 0; i < num; ++i) {
        cin >> input;
        ivec.push_back(input);
    }
    int *pi = new int[num]();
    for(size_t i = 0; i < num; i++)
    {
        pi[i] = ivec[i];
        cout << pi[i] << endl;
    }
    delete [] pi;
    return 0;
}
