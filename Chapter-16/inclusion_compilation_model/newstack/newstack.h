#ifndef NEWSTACK_H
#define NEWSTACK_H
#include<stack>
using namespace std;

template<class T>
class newstack
{
  	private:
		stack<T> stk;
	public:
		typedef typename stack<T>::size_type size_type;
	public:
		bool empty();
		T pop();
		T& top();
		void push(T);
		size_type size();
};
#include "newstack.cc"
#endif