#include <iostream>
using namespace std;

class Csmp3
{
private:
    int x, y;

public:
    Csmp3();
    Csmp3(int n);
    Csmp3(int n1, int n2);
    void disp() { cout << "x=" << x << " y=" << y << "\n"; }
};

Csmp3::Csmp3()
{
    x = 0;
    y = 0;
}
Csmp3::Csmp3(int n)
{
    x = n;
    y = 0;
}
Csmp3::Csmp3(int n1, int n2)
{
    x = n1;
    y = n2;
}

int main()
{
    Csmp3 d1;
    Csmp3 d2(200);
    Csmp3 d3 = 200;
    Csmp3 d4(300, 400);

    d1.disp(); // x=0 y=0
    d2.disp(); // x=200 y=0
    d3.disp(); // x=200 y=0
    d4.disp(); // x=300 y=400

    return 0;
}
