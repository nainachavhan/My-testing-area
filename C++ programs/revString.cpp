#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[100];
	char rev[100];
	int i, j ,len=0;
	std::cout << "enter the string:";
	gets_s(str);
	len = strlen(str);
	std::cout << "the reverse string is :";
	for (i = len ; i >= 0; i--) {
		std::cout << str[i];
	}
	return 0;
}