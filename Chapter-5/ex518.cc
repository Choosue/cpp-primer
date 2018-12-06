#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
    vector<string> strPtrVec;
    string hello = "hello";
    string world = "world";
    string chu = "chu";
    string shu = "shu";
    strPtrVec.push_back(hello);
    strPtrVec.push_back(world);
    strPtrVec.push_back(chu);
    strPtrVec.push_back(shu);
    vector<string>::iterator iter = strPtrVec.begin();
    while (iter != strPtrVec.end()) {
        cout << iter++->empty() << " ";
    }
    cout << endl;
    return 0;
}
