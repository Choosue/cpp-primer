#include <string>
#include <vector>
#include <utility>

class CheckoutRecord {
public:
    // ...
    std::string& operator[](const std::size_t);
    const std::string& operator[](const std::size_t) const;
private:
    double book_id;
    std::string title;
    // Date date_borrowed;
    // Date date_due;
    std::pair<std::string,std::string> borrower;
    std::vector< std::pair<std::string,std::string>* > wait_list;
};

std::string& CheckoutRecord::operator[](const std::size_t index)
{
    return wait_list[index]->first;
}

const std::string& CheckoutRecord::operator[](const std::size_t index) const
{
    return wait_list[index]->first;
}

int main(int argc, char const *argv[])
{
    CheckoutRecord cr;
    return 0;
}
