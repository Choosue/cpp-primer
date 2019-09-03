#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

template <class Type> class Queue;
template <class T> std::ostream& operator<<(std::ostream&, const Queue<T>&);
template <class T> std::istream& operator>>(std::istream&, const Queue<T>&);

template <class Type> class QueueItem {
    friend class Queue<Type>;
    friend std::ostream& operator<< <Type> (std::ostream&, const Queue<Type>&);
// private class: no public section
    QueueItem(const Type &t): item(t), next(0) { }
    Type item;       // value stored in this element
    QueueItem *next; // pointer to next element in the Queue
};

template <class Type> class Queue {
    friend std::ostream& operator<< <Type> (std::ostream&, const Queue<Type>&);
public:
    template <class Iter> Queue(Iter beg, Iter end):
        head(0), tail(0) { copy_elems(beg, end); } // replace current Queue by contents delimited by a pair of iterators
    template <class Iter> void assign(Iter, Iter);
    // rest of Queue class as before
    // empty Queue
    Queue(): head(0), tail(0) { }
    // copy control to manage pointers to QueueItems in the Queue
    Queue(const Queue &Q): head(0), tail(0) { copy_elems(Q); }
    Queue& operator=(const Queue&);
    ~Queue() { destroy(); }
    // return element from head of Queue
    // unchecked operation: front on an empty Queue is undefined
    Type& front() { return head->item; }
    const Type &front() const { return head->item; }
    void push(const Type &);
    void pop();
    bool empty() const { return head == 0; }
private:
    QueueItem<Type> *head;
    QueueItem<Type> *tail;
    // utility functions used by copy constructor, assignment, and destructor
    void destroy();
    void copy_elems(const Queue&);
    // version of copy to be used by assign to copy elements from iterator range
    template <class Iter> void copy_elems(Iter, Iter);
};

#include "Queue.cc"
#endif
