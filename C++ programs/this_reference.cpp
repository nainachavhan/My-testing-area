#include <iostream>
using namespace std;
class value {
private:
    int num;
    char ch;
public:
    value& setNum(int num) {
        this->num = num;
        return *this;
    }
    value& setCh(char ch) {
        this->num++;
        this->ch = ch;
        return *this;
    }
    void displayMyValues() {
        cout << num << endl;
        cout << ch;
    }
};
int main() {
    value obj;
  
    obj.setNum(95).setCh('A');
    obj.displayMyValues();
    return 0;
}