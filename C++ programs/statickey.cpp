#include <iostream>
using namespace std;

class Demo
{
private:
	static int rollno;
	
public:
	static void fun()
	{
		cout << "the roll is: " <<rollno<< endl;
		 
		}
};

//defining
int Demo::rollno = 95;
int main()
{
	Demo r;

	r.fun();

	return 0;
}