#include<iostream>
using namespace std;
class Employee {
public:
    int id;   
    string name;  
    float salary;
    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << id << "  " << name << "  " << salary << endl;
    }
};
int main(void) {
    Employee e1 = Employee(101, "Sonika", 70000);
    Employee e2 = Employee(102, "Nakul", 59000); 
    Employee e3 = Employee(102, "nancy", 65000);
    Employee e4 = Employee(102, "sachin", 100000);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    return 0;
}