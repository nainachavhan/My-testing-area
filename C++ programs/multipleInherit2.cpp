#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class A {
public:
    int a = 5;
    A() {
        cout << "Constructor for class A" << endl;
    }
};
class B {
public:
    int b = 10;
    B() {
        cout << "Constructor for class B" << endl;
    }
};
class C : public A, public B {
public:
    int c = 20;
    C() {
        cout << "Constructor for class C" << endl;
        cout << "Class C inherits from class B and class A" << endl;
    }
};
int main() {
    C obj;
    cout << "a = " << obj.a << endl;
    cout << "b = " << obj.b << endl;
    cout << "c = " << obj.c << endl;
    return 0;
}
