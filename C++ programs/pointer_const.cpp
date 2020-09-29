
#include<iostream>
int main() {
	int a = 10;
	int* const ptr = &a;
	*ptr = 5; 
	std::cout << a;
	return 0;
}