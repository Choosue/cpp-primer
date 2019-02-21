struct Base {
    Base(int val = 0): id(val) { }
protected:
    int id;
};

struct C1 : public Base {
    C1(int val): Base(val) { }
};

struct C2 : public C1 {
    C2(int val): C1(val) { }
};

struct C3 : public C1 {
    C3(int val): C1(val) { }
};

struct C4 : public Base {
    C4(int val) : Base(id + val){ }
};

struct C5 : public Base {
    C5() { }
};

int main(int argc, char const *argv[])
{
    C1 c1(0);
    return 0;
}
