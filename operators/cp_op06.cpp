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
    XYpos &operator++();
    XYpos operator++(int);
};

XYpos &XYpos::operator++()
{
    ++x;
    ++y;
    return *this;
}

XYpos XYpos::operator++(int)
{
    XYpos wk = *this;
    ++x;
    ++y;
    return wk;
}

int main()
{
    XYpos d1(100, 200), d2(100, 300), d3, d4;
    d3 = ++d1;
    d3.disp(); // (101,201)
    d1.disp(); // (101,201

    d3 = ++d1;
    d3.disp(); // (102,202)
    d1.disp(); // (102,202)

    d4 = d2++;
    d4.disp(); // (100,300)
    d2.disp(); // (101,301)

    return 0;
}
