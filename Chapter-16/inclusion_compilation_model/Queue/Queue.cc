template <class Type>
void Queue<Type>::destroy()
{
    while (!empty()) {
        pop();
    }
}

template <class Type>
void Queue<Type>::pop()
{
    // pop is unchecked: Popping off an empty Queue is undefined
    QueueItem<Type> *p = head; // keep pointer to head so we can delete it
    head = head->next;         // head now points to next element
    delete p;                  // delete old head element
}

template <class Type>
void Queue<Type>::push(const Type &val)
{
    // allocate a new QueueItem object
    QueueItem<Type> *pt = new QueueItem<Type>(val);
    // put item onto existing queue
    if (empty()) {
        head = tail = pt; // the queue now has only one element
    } else {
        tail->next = pt;  // add new element to end of the queue
        tail = pt;
    }
}

template <class Type>
void Queue<Type>::copy_elems(const Queue &orig)
{
    // copy elements from orig into this Queue
    // loop stops when pt == 0, which happens when we reach orig.tail
    for (QueueItem<Type> *pt = orig.head; pt; pt = pt->next) {
        push(pt->item); // copy the element
    }
}

template <class Type>
std::ostream& operator<<(std::ostream &os, const Queue<Type> &q)
{
    os << "< ";
    QueueItem<Type> *p;
    for (p = q.head; p; p = p->next) {
        os << p->item << " ";
    }
    os << ">";
    return os;
}

template <class Type>
std::istream& operator>>(std::istream &is, Queue<Type> &q)
{
    Type elem;
    Queue<Type> temp;

    while (is >> elem) {
        temp.push(elem);
    }

    q = temp;

    return is;
}

template <class Type>
Queue<Type>& Queue<Type>::operator=(const Queue &orig)
{
    copy_elems(orig);
    return *this;
}

template <class Type> template <class Iter>
void Queue<Type>::assign(Iter beg, Iter end)
{
    destroy(); // remove existing elements in this Queue
    copy_elems(beg, end); // copy elements from the input range
}

template <class Type> template <class Iter>
void Queue<Type>::copy_elems(Iter beg, Iter end)
{
    while (beg != end) {
        push(*beg);
        ++beg;
    }
}
