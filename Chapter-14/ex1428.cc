#include <iostream>

class CheckedPtr
{
private:
    int *beg;
    int *curr;
    int *end;
public:
    CheckedPtr(int *b, int *e): beg(b), end(e), curr(b) { }
    CheckedPtr& operator++();
    CheckedPtr& operator++() const;
    CheckedPtr& operator--();
    CheckedPtr operator++(int);
    CheckedPtr operator--(int);
    int& operator*() { return *curr; };
};

CheckedPtr& CheckedPtr::operator++()
{
    if (curr == end) {
        throw std::out_of_range
            ("increment past the end of CheckedPtr");
    }
    ++curr;
    return *this;
}

CheckedPtr& CheckedPtr::operator--()
{
    if (curr == beg) {
        throw std::out_of_range
            ("decrement past the begin of CheckedPtr");
    }
    --curr;
    return *this;
}

CheckedPtr CheckedPtr::operator++(int)
{
    CheckedPtr ret(*this);
    ++*this;
    return ret;
}

CheckedPtr CheckedPtr::operator--(int)
{
    CheckedPtr ret(*this);
    --*this;
    return ret;
}

CheckedPtr& CheckedPtr::operator++() const
{
    if (curr == end) {
        throw std::out_of_range("increment past the end of CheckedPtr");
    }
    ++curr;
    return *this;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    CheckedPtr cp(arr, arr+5);
    std::cout << *cp << std::endl;
    std::cout << *(++cp) << std::endl;
    std::cout << *(cp++) << std::endl;
    std::cout << *(--cp) << std::endl;
    std::cout << *(cp--) << std::endl;
    return 0;
}