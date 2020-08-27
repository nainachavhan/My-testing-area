#include<iostream>
using namespace std;
typedef struct student
{
	string name;
	int age;
}student; // Note that stud is not an object, it is an alternative name for structure data type
int main()
{
	student s; // s is an object of the structure
	cout << "Welcome to DataFlair tutorials!" << endl << endl;
	cout << "Enter student name: " << endl;
	cin >> s.name;
	cout << "Enter student age: " << endl;
	cin >> s.age;
	cout << "Student name is: " << s.name << endl;
	cout << "Student age is: " << s.age << endl;
	return 0;
}