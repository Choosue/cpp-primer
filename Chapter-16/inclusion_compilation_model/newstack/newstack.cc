template<class T>
bool newstack<T>::empty()
{
    return stk.empty();
}

template<class T>
T newstack<T>::pop()
{
	T temp(stk.top());
	stk.pop();
	return temp;
}

template<class T>
T& newstack<T>::top()
{
	return stk.top();
}

template<class T>
void newstack<T>::push(T value)
{
	stk.push(value);
}

template<class T>
typename newstack<T>::size_type 
newstack<T>::size()
{
	return stk.size();
}