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
    bool operator==(XYpos ob2);
    bool operator<(XYpos ob2);
};

bool XYpos::operator==(XYpos ob2)
{
    return x == ob2.x && y == ob2.y;
}

bool XYpos::operator<(XYpos ob2)
{
    return (x * x + y * y) < (ob2.x * ob2.x + ob2.y * ob2.y);
}

int main()
{
    XYpos d1(10, 20), d2(10, 20), d3(10, 25);

    if (d1 == d2)
        cout << "d1 == d2\n"; // d1 == d2
    else
        cout << "d1 != d2\n";

    if (d1 < d3)
        cout << "d1 <  d3\n"; // d1 <  d3
    else
        cout << "d1 >= d2\n";

    return 0;
}
