#include <string>

class Screen {
public:
private:
    std::string contents;
    std::string::size_type cursor;
    std::string::size_type height, width;
};

class ScrPtr {
    friend class ScreenPtr;
    Screen *sp;
    size_t use;
    ScrPtr(Screen *p): sp(p), use(1) { } ~ScrPtr() { delete sp; }
};

class ScreenPtr {
    friend ScreenPtr operator+(const ScreenPtr&, const ScreenPtr&);
public:
    ScreenPtr(Screen *p): ptr(new ScrPtr(p)) { }
    ScreenPtr(const ScreenPtr &orig):
        ptr(orig.ptr) { ++ptr->use; }
    ScreenPtr& operator=(const ScreenPtr&);
    ~ScreenPtr() { if (--ptr->use == 0) delete ptr; }
    ScreenPtr& operator+(int);
private:
    ScrPtr *ptr; // points to use-counted ScrPtr class
};

ScreenPtr&
ScreenPtr::operator+(int rhs)
{
    ScreenPtr ret(*this);
    ret += rhs;
    return ret;
}

ptrdiff_t
operator-(const ScreenPtr &lhs, const ScreenPtr &rhs)
{
    ScreenPtr ret(lhs.ptr.sp);
    ret += rhs;
    return ret;
}