#include <iostream>
using namespace std;

class Clsx
{
public:
    int x;
    Clsx() { x = 999; }
};

class Mycls
{
public:
    int y;
    Clsx cx;
};

int main()
{
    Mycls dt;
    cout << "dt.cx.x=" << dt.cx.x << "\n"; // dt.cx.x=999
    cout << "dt.y   =" << dt.y << "\n";    // dt.y   =-523579128 :: indefinite value

    return 0;
}
