#include <iostream>  
using namespace std;
class Account {
public:
    string name = "sanchita";
    float salary = 60000;
};
class Programmer : public Account {
public:
    float bonus = 5000;
};
int main(void) {
    Programmer p1;
    cout << "name: " << p1.name << endl;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    return 0;
}