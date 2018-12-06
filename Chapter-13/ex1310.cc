#include <string>
#include <iostream>

class Employee {
public:
    Employee(const std::string& name);
    Employee(const Employee& employee);
    Employee& operator=(const Employee& employee);
    std::string get_name() const { return name_; }
    int get_id() const { return id_; }
private:
    std::string name_;
    int id_;
    static int next_id_;
};

int Employee::next_id_ = 0;

Employee::Employee(const std::string& name)
{
    name_ = name;
    id_ = ++next_id_;
}

Employee::Employee(const Employee& employee)
{
    name_ = employee.get_name();
    id_ = employee.get_id();
}

Employee& Employee::operator=(const Employee& employee)
{
    name_ = employee.get_name();
    id_ = employee.get_id();
    return *this;
}

int main()
{
    Employee employee1("Liu");
    Employee employee2("Chen");
    Employee employee3("Xiao");
    std::cout << employee1.get_name() << ": " << employee1.get_id() << std::endl;
    std::cout << employee2.get_name() << ": " << employee1.get_id() << std::endl;
    std::cout << employee3.get_name() << ": " << employee1.get_id() << std::endl;
    employee2 = employee3;
    std::cout << employee1.get_name() << ": " << employee1.get_id() << std::endl;
    std::cout << employee2.get_name() << ": " << employee1.get_id() << std::endl;
    std::cout << employee3.get_name() << ": " << employee1.get_id() << std::endl;
    return 0;
}