#include <iostream>
using namespace std;

class Csmp4
{
private:
    int x, y;

public:
    Csmp4(int n1 = 0, int n2 = 0);
    void disp() { cout << "x=" << x << " y=" << y << "\n"; }
};

Csmp4::Csmp4(int n1, int n2)
{
    x = n1;
    y = n2;
}

int main()
{
    Csmp4 b1;
    Csmp4 b2(100);
    Csmp4 b3 = 200;
    Csmp4 b4(300, 400);

    b1.disp(); // x=0 y=0
    b2.disp(); // x=100 y=0
    b3.disp(); // x=200 y=0
    b4.disp(); // x=300 y=400

    return 0;
}
