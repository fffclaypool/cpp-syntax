#include <iostream>
using namespace std;

class XYpos
{
private:
    int x, y;

public:
    XYpos(int n1 = 0, int n2 = 0)
    {
        x = n1;
        y = n2;
    }
    void disp() { cout << "(" << x << "," << y << ")\n"; }
    XYpos operator-();
    XYpos operator-(XYpos obj);
};

XYpos XYpos::operator-()
{
    return XYpos(-x, -y);
}

XYpos XYpos::operator-(XYpos ob2)
{
    return XYpos(x - ob2.x, y - ob2.y);
}

int main()
{
    XYpos d1(100, 200), d2(40, 50), dd;

    dd = -d1;
    dd.disp(); // (-100,-200)

    dd = d1 - d2;
    dd.disp(); // (60,150)

    return 0;
}
