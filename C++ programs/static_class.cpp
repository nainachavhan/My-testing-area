#include<iostream>
class Abc
{
	int i;
public:
	Abc() {
		i = 0;
		std::cout << "Constructor ";
	}
	~Abc() {
		std::cout << "Destructor";

	}

};
void f() {
	static  Abc obj;
}
int main() {
	int x = 1;
	if (x == 1) {
		f();
	}
	std::cout << "end ";
	
}