// C++ program to print the Armstrong numbers between the two intervals

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int start, end, i, temp1, temp2, remainder, n = 0, result = 0;

	std::cout << "Enter start value and end value : ";
	cin >> start >> end;
	std::cout << "\nArmstrong numbers between ” << start << ” and ” << end << ” are : ";

	for (i = start + 1; i < end; ++i)
	{
		temp2 = i;
		temp1 = i;

		while (temp1 != 0)
		{
			temp1 /= 10;
			++n;
		}

		while (temp2 != 0)
		{
			remainder = temp2 % 10;
			result += pow(remainder, n);
			temp2 /= 10;
		}

		if (result == i) {
			std::cout << i << " ";
		}

		n = 0;
		result = 0;

	}
	std::cout << endl;
	return 0;
}

