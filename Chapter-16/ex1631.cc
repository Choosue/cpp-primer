template <class elemType> class ListItem;
template <class elemType> class List {
public:
    List<elemType>();
    List<elemType>(const List<elemType> &);
    List<elemType>& operator=(const List<elemType> &);
    ~List();
    void insert(ListItem<elemType> *ptr, elemType value);
    ListItem<elemType> *find(elemType value);
private:
    ListItem<elemType> *front;
    ListItem<elemType> *end;
};

int main()
{
    return 0;
}