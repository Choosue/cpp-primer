#include <list>
#include <deque>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> ilist;
    deque<int> even_deque;
    deque<int> odd_deque;
    ilist.push_back(1);
    ilist.push_back(2);
    ilist.push_back(3);
    ilist.push_back(4);
    ilist.push_back(5);
    ilist.push_back(6);
    ilist.push_back(7);
    ilist.push_back(8);
    ilist.push_back(9);
    ilist.push_back(10);
    list<int>::const_iterator it = ilist.begin();
    for ( ; it != ilist.end(); ++it) {
        if (*it % 2 == 0) {
            even_deque.push_back(*it);
        } else {
            odd_deque.push_back(*it);
        }
    }
    deque<int>::const_iterator diter = even_deque.begin();
    for ( ; diter != even_deque.end(); ++diter) {
        cout << *diter << " ";
    }
    cout << endl;
    diter = odd_deque.begin();
    for ( ; diter != odd_deque.end(); ++diter) {
        cout << *diter << " ";
    }
    cout << endl;
    return 0;
}
