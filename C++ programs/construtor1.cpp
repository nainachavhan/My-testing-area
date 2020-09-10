#include<iostream>
class cube
{
public:
	int side;
	cube(int x) {
		side = x;

	}

};
int main() {
	cube c1(10);
	cube c2(20);
	cube c3(30);
	cube c4(40);
	std::cout << c1.side<<"\n";
	std::cout << c2.side<<"\n";
	std::cout << c3.side<<"\n";
	std::cout << c4.side<<"\n";
}