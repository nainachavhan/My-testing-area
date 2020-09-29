#include<iostream>
int main() {
	int a{ 10 };
	int& b = a;
	if (&a == &b) 
		std::cout << "true";
	
	else
	
		std::cout << "false";
	
return 0;
}