#include<iostream>

int main() {
	int x = 10;
	int& ref = x;
	ref = 20;
	std::cout << x << "\n";
	x = 30;
	std::cout << ref;
	return 0;
}