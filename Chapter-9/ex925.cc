#include <list>
#include <string>
#include <iostream>
using std::endl;
using std::cout;
using std::string;
using std::list;

int main(int argc, char const *argv[])
{
    string val1 = "liu";
    string val2 = "hi";
    list<string> slist;
    slist.push_back("hello");
    slist.push_back("liu");
    slist.push_back("chushu");
    slist.push_back("shu");
    slist.push_back("hello");
    list<string>::iterator elem1, elem2;
    elem1 = find(slist.begin(), slist.end(), val1);
    elem2 = find(slist.begin(), slist.end(), val2);
    slist.erase(elem1, elem2);
    list<string>::iterator it = slist.begin();
    for ( ; it != slist.end(); ++it) {
        cout << *it << endl;
    }
    cout << endl;
    if (slist.empty()) {
        cout << "The list is empty" << endl;
    } else {
        cout << "Erase failed" << endl;
    }
    return 0;
}