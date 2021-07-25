#include <iostream>
using namespace std;

class ClsX
{
private:
    int x;

public:
    ClsX(int n = 0) { x = n; }
    void setX(int n) { x = n; }
    int getX() { return x; }
    void dispX() { cout << "x=" << x << "\n"; }
};

class ClsXY : public ClsX
{
private:
    int y;

public:
    ClsXY(int n1 = 0, int n2 = 0)
    {
        setX(n1);
        y = n2;
    }
    void dispXY() { cout << "x=" << getX() << " y=" << y << "\n"; }
};

int main()
{
    ClsXY a(10, 20);
    a.dispXY(); // x=10 y=20

    return 0;
}