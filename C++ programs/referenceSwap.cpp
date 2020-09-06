#include<iostream>
using namespace std;
void swap(int& first,int& second){
	int temp = first;
	first = second;
	second = temp;
}
int main() {
	int a = 20, b = 30;
	swap(a, b);
	std::cout <<a << "  " << b;
		return 0;
}
