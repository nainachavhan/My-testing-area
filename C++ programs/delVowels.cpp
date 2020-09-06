#include<iostream>
#include<string.h>
using namespace std;
int main() {
	char str[100];

	int i, j, len = 0;
	std::cout << "enter the string:";
	gets_s(str);
	len = strlen(str);

	for (i = 0; i <len; i++) {
		if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'U') {
			for (j = i; j <len; j++) {
				str[j] = str[j + 1];

			}
			len--;
		}
	}
	std::cout << "after deleting the vowels value will be:"<<str;
	return 0;
}


