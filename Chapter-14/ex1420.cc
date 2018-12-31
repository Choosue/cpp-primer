#include <ostream>
#include <string>

class Screen {
public:
    // interface member functions
    // display overloaded on whether the object is const or not
    Screen& display(std::ostream &os)
        { do_display(os); return *this; }
    const Screen& display(std::ostream &os) const
        { do_display(os); return *this; }
private:
    std::string contents;
    // single function to do the work of displaying a Screen, // will be called by the display operations
    void do_display(std::ostream &os) const
        { os << contents; }
    // as before
};

class ScrPtr {
    friend class ScreenPtr;
    Screen *sp;
    size_t use;
    ScrPtr(Screen *p): sp(p), use(1) { }
    ~ScrPtr() { delete sp; }
};

class ScreenPtr {
public:
    // no default constructor: ScreenPtrs must be bound to an object
    ScreenPtr(Screen *p): ptr(new ScrPtr(p)) { }
    // copy members and increment the use count
    ScreenPtr(const ScreenPtr &orig): ptr(orig.ptr) { ++ptr->use; }
    ScreenPtr& operator=(const ScreenPtr&);
    // if use count goes to zero, delete the ScrPtr object
    ~ScreenPtr() { if (--ptr->use == 0) delete ptr; }

    // constructor and copy control members as before
    Screen &operator*() { return *ptr->sp; }
    Screen *operator->() { return ptr->sp; }
    const Screen &operator*() const { return *ptr->sp; } const Screen *operator->() const { return ptr->sp; }
private:
    ScrPtr *ptr; // points to use-counted ScrPtr class
};

ScreenPtr& ScreenPtr::operator=(const ScreenPtr &rhs)
{
    ++rhs.ptr->use;
    if (--ptr->use == 0)
        delete ptr;
    ptr = rhs.ptr;
    return *this;
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
