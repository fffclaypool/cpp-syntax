#include <iostream>
using namespace std;

class XYdata
{
private:
    int x, y;

public:
    XYdata()
    {
        x = 0;
        y = 0;
    }
    // explicit XYdata(int n) { x = n; y = 0; }
    XYdata(int n)
    {
        x = n;
        y = 0;
    }
    XYdata(int n1, int n2)
    {
        x = n1;
        y = n2;
    }
    void disp() { cout << "x=" << x << " y=" << y << "\n"; }
};

void myfunc(XYdata dt)
{
    dt.disp();
}

int main()
{
    XYdata d1(100);
    XYdata d2 = 200;
    XYdata d3, d4;

    d3 = XYdata(300);
    d4 = 400;

    d1.disp(); // x=100 y=0
    d2.disp(); // x=200 y=0
    d3.disp(); // x=300 y=0

    myfunc(d1);  // x=100 y=0
    myfunc(500); //x=500 y=0

    return 0;
}
