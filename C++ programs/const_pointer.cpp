#include<iostream>
  int main() {
	const int a = 10;
	const int* ptr = &a;
	ptr++;
	std::cout << a;
	return 0;
}