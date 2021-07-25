#include <iostream>
using namespace std;

class ClsX
{
public:
    int x;
    ClsX(int n = 0) { x = n; }
    void dispX() { cout << "x=" << x << "\n"; }
};

class ClsXY : public ClsX
{
public:
    int y;
    ClsXY(int n1 = 0, int n2 = 9)
    {
        x = n1;
        y = n2;
    }
    void dispXY() { cout << "x=" << x << " y=" << y << "\n"; }
};

int main()
{
    ClsXY a(10, 20); // x=10 y=20
    a.dispXY();

    a.x = 30;
    a.y = 40;
    a.dispX();  // x=30
    a.dispXY(); // x=30 y=40

    return 0;
}
