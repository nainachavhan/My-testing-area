#include <iostream> 
using namespace std;

class A {
public:
    int a, b;
    A() // constructor 
    {
        a = 10 * 20;
    }
};

class B : public virtual A {
};

class C : public virtual A {
};

class D : public B, public C {
};

int main()
{
    D object; // object creation of class d 
    cout << "a = " << object.a << endl;

    return 0;
}