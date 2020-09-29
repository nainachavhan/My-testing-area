#include<iostream>
using namespace std;
class point 
{
private:
	double x, y;
public:
	explicit point(double a = 0.0, double b = 0.0) : x(a), y(b) {

	}
	bool operator==(point p2) {
		if (p2.x == this->x && p2.y == this->y)
			return true;
		return false;

	}
};
int main()
{
	point p(5, 0);
	if (p == (point)5)
		cout << "they are same";
	else
		cout << "they are not same";

}