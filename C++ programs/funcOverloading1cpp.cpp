#include <iostream>
using namespace std;
class Addition {
public:
    int sum(int num1, int num2) {
        return num1 + num2;
    }
    int sum(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};
int main(void) {
    Addition obj;

    std::cout << obj.sum(20, 15) << endl;
    std::cout << obj.sum(81, 100, 10);
    return 0;
}