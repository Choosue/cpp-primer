#include <iostream>
#include <string>

class Point {
public:
    Point()
    {
        x_ = 0;
        y_ = 0;
    }
    Point(const Point& point)
    {
        std::cout << copy_info << ": copy invoked." << std::endl;
    }
    static void set_copy_info(const char *str)
    {
        copy_info = std::string(str);
    }
private:
    static std::string copy_info;
    int x_;
    int y_;
};

Point global;
std::string Point::copy_info = "init";

Point foo_bar(Point arg) // the parameter is non-reference type, so that arg is copied from the caller
{
    Point::set_copy_info("when initialize local");
    Point local = arg; // explicit copy when initialize local
    Point::set_copy_info("when initialize pointer heap");
    Point *heap = new Point(global); // explicit copy when initialize object pointed by heap
    Point::set_copy_info("when assign to heap");
    *heap = local;
    Point::set_copy_info("when initialize array pa");
    Point pa[ 4 ] = { local, *heap }; // explicit copy when initialize array pa
    Point::set_copy_info("when return heap");
    return *heap; // implicit copy when return
}

int main(int argc, char const *argv[])
{
    Point::set_copy_info("when passed to foo_bar");
    Point point = foo_bar(global);
    return 0;
}
