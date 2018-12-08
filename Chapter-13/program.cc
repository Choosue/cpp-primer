#include "ex1319.h"

int main()
{
    Message msg1("first message");
    Message msg2("second message");
    Folder folder1("/usr1");
    Folder folder2("/home");
    msg1.save(folder1);
    msg1.save(folder2);
    // msg1.printFldrs();
    // folder1.printMsgs();
    // folder2.printMsgs();
    msg2 = msg1;
    msg2.printFldrs();
    folder1.printMsgs();
    folder2.printMsgs();
    return 0;
}