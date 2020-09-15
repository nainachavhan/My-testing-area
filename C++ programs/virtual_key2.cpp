#include<iostream>
class A
{
public:
	int data_;
	A() :data_(999){}
	A(int value) : data_(value){}
};
class B : virtual public A
{
public:
	B(int value) :A(value){}
};
class C :virtual public A
{
public:
	C(int value) :A(value){}
};
class D :public B, public C
{
public:
	D(int value1,int value2):B(value1),C(value2){}
};
int main()
{
	D d1(100, 200);
	std::cout << "the value of data is " << d1.data_ << std::endl;
}