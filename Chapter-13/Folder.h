#include <set>
#include <string>

class Message;

class Folder {
    friend class Message;
public:
    Folder(const std::string& name = ""): name_(name) {}
private:
    std::string name_;
    std::set<Message*> messages_;
    void addMsg(Message*);
    void remMsg(Message*);
};