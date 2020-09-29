#include<iostream>
void counter() {
	int count = 0;
	std::cout << count++;
}
int main() {
	for (int i = 0; i <= 5; i++) {
		counter();
	}
	return 0;
}