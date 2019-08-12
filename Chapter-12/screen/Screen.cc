#include "Screen.h"

Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

Screen& Screen::move(index r, index c)
{
    index row = r * width; // row location
    cursor = row + c;
    return *this;
}

void Screen::do_display(std::ostream &os) const
{
    for (index r = 0; r < height; ++r) {
        for (index c = 0; c < width; ++c) {
            os << contents[r * width + c];
        }
        os << '\n';
    }
    // os << contents;
}