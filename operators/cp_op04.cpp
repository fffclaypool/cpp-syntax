#include <iostream>
using namespace std;

class XYpos;
XYpos operator+(int xtd, XYpos ob2);

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
    XYpos operator+(XYpos ob2);
    friend XYpos operator+(int xdt, XYpos ob2);
};

XYpos XYpos::operator+(XYpos ob2)
{
    return XYpos(x + ob2.x, y + ob2.y);
}

XYpos operator+(int xdt, XYpos ob2)
{
    return XYpos(xdt + ob2.x, ob2.y);
}

int main()
{
    XYpos d1(100, 200), d2(30, 40), dd;

    dd = d1 + d2;
    dd.disp(); // (130,240)

    dd = d1 + 1000;
    dd.disp(); // (1100,200)

    dd = 1000 + d2;
    dd.disp(); // (1030,40)

    dd = 1000 + 2000;
    dd.disp(); // (3000,0)

    return 0;
}
