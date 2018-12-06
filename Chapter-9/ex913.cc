#include <vector>
#include <iostream>
using namespace std;

/*
 * Return an iterator that refers to the element found.
 * Return an iterator that refers to one past the last
 * element if not found
 */
vector<int>::iterator
findElemInRange(vector<int>::iterator first,
                vector<int>::iterator last,
                int elem)
{
    while (first != last) {
        if (*first++ == elem) {
            return --first;
        }
    }
    return last;
}

int main(int argc, char const *argv[])
{
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(11);
    ivec.push_back(22);
    ivec.push_back(13);
    ivec.push_back(14);
    vector<int>::iterator it = findElemInRange(ivec.begin(), ivec.end(), 14);
    if (it != ivec.end()) {
        cout << "*it = " << *it << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
