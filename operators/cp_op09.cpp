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
    XYpos &operator+=(XYpos ob2);
};

XYpos &XYpos::operator+=(XYpos ob2)
{
    x += ob2.x;
    y += ob2.y;
    return *this;
}

int main()
{
    XYpos d1(100, 200), d2(100, 200), d3(10, 20), d4(1, 2);

    d1 += d3;
    d1.disp(); // (110,220)
    d3.disp(); // (10,20)

    d2 += d3 += d4;
    d2.disp(); // (111,222)
    d3.disp(); // (11,22)
    d4.disp(); // (1,2)

    return 0;
}
