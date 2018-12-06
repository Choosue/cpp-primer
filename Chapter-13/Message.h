#include <string>
#include <iostream>
#include "Folder.h"

class Message {
    friend class Folder;
public:
    // folders is initialized to the empty set automatically
    Message(const std::string &contents = ""): contents_(contents) { }
    // copy control: we must manage pointers to this Message
    // from the Folders pointed to by folders
    Message(const Message&);
    Message& operator=(const Message&); ~Message();
    // add/remove this Message from specified Folder's set of messages
    void save(Folder&);
    void remove(Folder&);
private:
    std::string contents_; // actual message text
    std::set<Folder*> folders_; // Folders that have this Message
    // Utility functions used by copy constructor, assignment, and destructor:
    // Add this Message to the Folders that point to the parameter
    void put_Msg_in_Folders(const std::set<Folder*>&); // remove this Message from every Folder in folders
    void remove_Msg_from_Folders();
    void addFldr(Folder*);
    void remFldr(Folder*);
};