#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
    int num;
    int elem;
    vector<int> ivec;

    cout << "Please input number of elements of vector:" << endl;
    cin >> num;
    cout << "Please input each element:" << endl;
    for (vector<int>::size_type i = 0; i != num; ++i) {
        cin >> elem;
        ivec.push_back(elem);
    }

    cout << "Now Exercise 3.13 part one:" << endl;
    int last = *ivec.begin();
    for (vector<int>::const_iterator iter = ivec.begin();
                                     iter != ivec.end(); ++iter) {
        if (last % 2 != 0 || *iter % 2 != 0) {
            cout << "There is an odd number! Print last number " << last << endl;
        } else {
            cout << last + *iter << endl;
        }
        last = *iter;
    }

    cout << "Now Exercise 3.13 part two:" << endl;
    vector<int>::const_iterator head = ivec.begin(),
                                tail = ivec.end() - 1;
    while (head < tail) {
        cout << *head + *tail << endl;
        head++;
        tail--;
    }
    return 0;
}