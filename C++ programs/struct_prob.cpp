#include <iostream>
using namespace std;
struct Student {
	char stuName[30];
	int stuRollNo;
	int stuAge;
};
void printStudentInfo(Student);
int main() {
	Student s;
	cout << "Enter Student Name: ";
	cin.getline(s.stuName, 30);
	cout << "Enter Student Roll No: ";
	cin >> s.stuRollNo;
	cout << "Enter Student Age: ";
	cin >> s.stuAge;
	printStudentInfo(s);
	return 0;
}
void printStudentInfo(Student s) {
	cout << "Student Record:" << endl;
	cout << "Name: " << s.stuName << endl;
	cout << "Roll No: " << s.stuRollNo << endl;
	cout << "Age: " << s.stuAge;
}