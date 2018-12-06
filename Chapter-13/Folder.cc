#include "Folder.h"

// operation to add a message
void Folder::addMsg(Message* msg)
{
    messages_.insert(msg);
    msg->addFldr(this);
}

// operation to remove a message
void Folder::remMsg(Message* msg)
{
    messages_.erase(msg);
}