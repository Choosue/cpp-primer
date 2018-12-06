#include <string>
#include <iostream>
using namespace std;

string greet(string form, string lastname, string title,
             string::size_type pos, int length)
{
    form.replace(8, 5, lastname);
    form.replace(5, 2, title, pos, length);
    return form;
}

int main(int argc, char const *argv[])
{
    string generic1("Dear Ms Daisy:");
    string generic2("MrsMsMissPeople");
    string lastName("AnnaP");
    string salute = greet(generic1, lastName, generic2, 5, 4);
    cout << salute << endl;
    salute = greet(generic1, lastName, generic2, 0, 3);
    cout << salute << endl;
    return 0;
}
