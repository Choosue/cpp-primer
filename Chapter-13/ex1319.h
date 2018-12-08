#include <string>
#include <set>
#include <iostream>

class Folder;

class Message {
    friend class Folder;
public:
    // folders is initialized to the empty set automatically
    Message(const std::string &str = ""): contents(str) { }
    // copy control: we must manage pointers to this Message
    // from the Folders pointed to by folders
    Message(const Message&);
    Message& operator=(const Message&);
    ~Message();
    // add/remove this Message from specified Folder's set of messages
    void save(Folder&);
    void remove(Folder&);
    void printFldrs();
private:
    std::string contents; // actual message text
    std::set<Folder*> folders; // Folders that have this Message
    // Utility functions used by copy constructor, assignment, and destructor:
    // Add this Message to the Folders that point to the parameter
    void put_Msg_in_Folders(const std::set<Folder*>&);
    // Remove this Message from every Folder in folders
    void remove_Msg_from_Folders();
    // Utility functions used by Folder class
    void addFldr(Folder* fldr) { folders.insert(fldr); }
    void remFldr(Folder* fldr) { folders.erase(fldr); }
};

class Folder {
    friend class Message;
public:
    Folder(const std::string &str): name(str) { }
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void printMsgs();
private:
    std::string name;
    std::set<Message*> msgs;
    void addMsg(Message* msg) { msgs.insert(msg); }
    void remMsg(Message* msg) { msgs.erase(msg); }
    void put_Fldr_in_Msgs(const std::set<Message*>&);
    void remove_Fldr_from_Msgs();
};