#include "Screen.h"
using namespace std;

int main()
{
    Screen myScreen(5, 6);
    myScreen.move(4,0).set('#').display(cout);
    return 0;
}