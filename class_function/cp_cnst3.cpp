#include <iostream>
using namespace std;

class Csmp2
{
private:
    int x, y;
public:
    Csmp2(int n1, int n2);
    void disp() { cout << "x=" << x << " y=" << y << "\n"; }
};

Csmp2::Csmp2(int n1, int n2)
{
    x = n1;
    y = n2;
}

int main()
{
    Csmp2 d1(100, 200);
    Csmp2 d2 = Csmp2(300, 400);

    d1.disp(); // x=100 y=200
    d2.disp(); // x=300 y=400

    d2 = Csmp2(500, 600);
    d2.disp(); // x=500 y=600

    return 0;
}
