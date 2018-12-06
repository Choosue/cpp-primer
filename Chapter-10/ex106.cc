#include <vector>
#include <list>
#include <utility>
#include <map>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    map< vector<int>::iterator, int > map1;
    vector<int> intVec;
    intVec.push_back(1);
    intVec.push_back(2);
    intVec.push_back(3);
    vector<int>::iterator it1 = intVec.begin();
    map1.insert(map< vector<int>::iterator, int >::value_type(it1, 5));

    map< list<int>::iterator, int > map2;
    list<int> intList;
    intList.push_back(1);
    intList.push_back(2);
    intList.push_back(3);
    list<int>::iterator it1 = intList.begin();
    map2.insert(map< list<int>::iterator, int >::value_type(it1, 5)); // Compile error

    map< pair<int, string>, int > map3;
    pair<int, string> pair1(1, "one");
    pair<int, string> pair2(2, "two");
    pair<int, string> pair3(3, "three");
    map3.insert(map< pair<int, string>, int>::value_type(pair1, 11));
    return 0;
}
