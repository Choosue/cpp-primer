template <class Type> class List {
public:
    List() {}       // default constructor
    Type &front(); // return element from head of List
    Type &back();  // return element from back of List
    const Type &front () const;
    const Type &back () const;
    void insert (const Type &); // inserts elements
    void pop_back();            // remove the last element
    bool empty() const;         // true if no elements in the List
private:
    // ...
};

int main()
{
    List<int> list;
    return 0;
}