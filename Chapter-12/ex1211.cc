class Y;

class X
{
    Y *pointer_to_y;
};

class Y
{
    X object_of_x;
};

int main(int argc, char const *argv[])
{
    X x;
    Y y;
    return 0;
}
