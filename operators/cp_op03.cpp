#include <iostream>
using namespace std;

class XYpos;
XYpos operator+(XYpos ob1, XYpos ob2);

class XYpos
{
private:
    int x, y;

public:
    XYpos(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    void disp() { cout << "(" << x << "," << y << ")\n"; }
    friend XYpos operator+(XYpos ob1, XYpos ob2);
};

XYpos operator+(XYpos ob1, XYpos ob2)
{
    return XYpos(ob1.x + ob2.x, ob1.y + ob2.y);
}

int main()
{
    XYpos d1(100, 200), d2(30, 40), d3;

    d3 = d1 + d2;
    d1.disp(); // (100,200)
    d2.disp(); // (30,40)
    d3.disp(); // (130,130)

    return 0;
}
