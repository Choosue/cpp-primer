#include <iostream>
#include <string>

class Screen {
public:
    typedef std::string::size_type index;
    Screen (index h, index w)
    {
        height = h;
        width = w;
        contents = std::string(h * w, '0');
    }
    // interface member functions
    // display overloaded on whether the object is const or not 
    Screen& display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }
    const Screen& display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }
    Screen& set(char);
    Screen& move(index, index);
private:
    std::string contents;
    index cursor;
    index height, width;
    // single function to do the work of displaying a Screen, 
    // will be called by the display operations
    // as before
    void do_display(std::ostream &os) const;
};