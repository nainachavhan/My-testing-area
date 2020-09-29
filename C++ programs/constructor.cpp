#include<iostream>
class multiply {
public:
	int multi;
	multiply(int x, int y) {
		multi = x * y;
	}
};
int main() {
	multiply m(10,20);
	std::cout << m.multi;
	}