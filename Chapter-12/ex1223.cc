class NoDefault {
public:
    NoDefault(int ival): ival_(ival) {}
private:
    int ival_;
};

class C {
public:
    C(NoDefault &nodefault): nodefault_(0) {}
private:
    NoDefault nodefault_;
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
