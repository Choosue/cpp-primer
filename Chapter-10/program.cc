#include <iostream>
#include "text_query.h"
using namespace std;

ifstream& open_file(ifstream &in, const string &file) {
    in.close(); // close in case it was already open
    in.clear(); // clear any existing errors
    // if the open fails, the stream will be in an invalid state
    in.open(file.c_str()); // open the file we were given
    return in; // condition state is good if open succeeded
}

int main(int argc, char const *argv[])
{
    if (argc != 3) {
        throw runtime_error("Wrong number of arguments!");
    }

    ifstream text;
    if (!open_file(text, argv[2])) {
        throw runtime_error("No text file!");
    }

    TextQuery *text_query = new TextQuery();
    text_query->read_file(text);
    set<TextQuery::line_no> result = text_query->run_query(argv[1]);

    set<TextQuery::line_no>::iterator it = result.begin();
    for (; it != result.end(); ++it) {
        cout << text_query->text_line(*it) << endl;
    }
    return 0;
}
