#include <vector>
#include <iostream>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

bool isPrefix(vector<int> vecA, vector<int> vecB) {
    vector<int> vecSmall;
    vector<int> vecBig;
    if (vecA.size() == 0 || vecB.size() == 0) {
        return false;
    }
    if (vecA.size() < vecB.size()) {
        vecSmall = vecA;
        vecBig = vecB;
    } else { // vecA.size() >= vecB.size()
        vecSmall = vecB;
        vecBig = vecA;
    }
    for (size_t ix = 0; ix != vecSmall.size(); ++ix) {
        if (vecSmall[ix] != vecBig[ix]) {
            return false;
        }
    }
    return true;
}

vector<int> getVecFromStdin(vector<int> vec, const string vecName) {
    int input;
    cout << "Input " << vecName << "(end with '9999'): ";
    while ((cin >> input) && input != 9999) {
        vec.push_back(input);
    }
    vector<int>::iterator iter = vec.begin();
    for (; iter != vec.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    return vec;
}

int main(int argc, char const *argv[])
{
    vector<int> vecA;
    vector<int> vecB;
    vecA = getVecFromStdin(vecA, "vecA");
    vecB = getVecFromStdin(vecB, "vecB");
    cout << (isPrefix(vecA, vecB) ? "has prefix" : "no prefix") << endl;
    return 0;
}
