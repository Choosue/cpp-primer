#include "Message.h"

// copy constructor
Message::Message(const Message &msg): contents_(msg.contents_), folders_(msg.folders_)
{
    // add this Message to each Folder that points to msg
    put_Msg_in_Folders(folders_);
}

// assignment operator
Message& Message::operator=(const Message &msg)
{
    if (&msg != this) {
        remove_Msg_from_Folders(); // update existing Folders
        contents_ = msg.contents_; // copy contents from msg
        folders_ = msg.folders_; // copy Folder pointers from msg
        // add this Message to each Folder in msg
        put_Msg_in_Folders(msg.folders_);
    }
    return *this;
}

// destructor
Message::~Message()
{
    remove_Msg_from_Folders();
}

// util function to add message(this) to every folder in set folders
void Message::put_Msg_in_Folders(const std::set<Folder*> &folders)
{
    for(std::set<Folder*>::const_iterator beg = folders.begin(); beg != folders.end(); ++beg) {
        (*beg)->addMsg(this); // *beg points to a Folder
        std::cout << "Message " << contents_ << " has been put in " << (*beg)->name_ << std::endl;
    }
}

// util function to remove message(this) from every folder in member folders_
void Message::remove_Msg_from_Folders()
{
    // remove this message from corresponding folders
    for(std::set<Folder*>::const_iterator beg = folders_.begin (); beg != folders_.end (); ++beg) {
        (*beg)->remMsg(this); // *beg points to a Folder
        std::cout << "Message " << contents_ << " has been removed from " << (*beg)->name_ << std::endl;
    }
}

// util function to add a folder to member folders_
void Message::addFldr(Folder* folder)
{
    folders_.insert(folder);
    std::cout << "Message " << contents_ << " added in " << folder->name_;
}

// util function to remove a folder from member folders_
void Message::remFldr(Folder* folder)
{
    folders_.erase(folder);
    std::cout << "Message " << contents_ << " removed from " << folder->name_;
}

// operation to save a message(this) in folder
void Message::save(Folder& folder)
{
    folders_.insert(&folder);
    folder.addMsg(this);
}

// operation to remove a message(this) from folder
void Message::remove(Folder& folder)
{
    folders_.erase(&folder);
    folder.remMsg(this);
}