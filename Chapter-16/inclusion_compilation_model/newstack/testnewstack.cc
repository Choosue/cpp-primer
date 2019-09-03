#include <iostream>
#include "newstack.h"
using namespace std;

int main()
{
    newstack<int> a;	
	a.push(2);
	cout << a.pop() << endl;
	cout << boolalpha << a.empty() << endl;

	return 0;
}