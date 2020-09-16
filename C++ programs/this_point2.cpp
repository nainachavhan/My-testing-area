#include <iostream>
using namespace std;
class value {
private:
    int num;
    char ch;
public:
    void setMyValues(int num, char ch) {
        this->num = num;
        this->ch = ch;
    }
    void displayMyValues() {
        cout << num << endl;
        cout << ch;
    }
};
int main() {
    value obj;
    obj.setMyValues(95, 'A');
    obj.displayMyValues();
    return 0;
}