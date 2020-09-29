#include <iostream>
using namespace std;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    int myDesign = ITALICS | UNDERLINE;
     cout << myDesign;

    return 0;
}