#include <string>
using namespace std;

// typedef string Type;
// Type initVal();
class Exercise {
public:
    // ...
    typedef double Type;
    void setVal(Type);
    Type initVal() {
        return 1; // any initial value
    }
private:
    int val;
};

void Exercise::setVal(Type parm) {
    val = parm + initVal();
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
