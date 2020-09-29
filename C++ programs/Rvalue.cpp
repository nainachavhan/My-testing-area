#include<iostream>
int main() {
	int x = 10;
	int& lref = x;
	int&& rref = 20;
	std::cout << lref << "\n" << rref << "\n";
	 lref = 30;
	rref = 40;
	std::cout << lref << "\n" << rref << "\n";
	return 0;
}

