#include<iostream>
class Demo
{
private:
	int num1, num2;
public:
	Demo() {
		num1 = 10;
		num2 = 20;
	}
	void display() {
		std::cout << "num1= " << num1 << "\n";
		std::cout << "num2= " << num2 <<"\n";

	}
};
int main() {
	Demo D;
	D.display();
	return 0;
}