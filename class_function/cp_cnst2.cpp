#include <iostream>
using namespace std;

class Csmp1
{
private:
    int x;

public:
    Csmp1(int n);
    void disp() { cout << "x=" << x << "\n"; }
};

Csmp1::Csmp1(int n)
{
    x = n;
}

int main()
{
    Csmp1 d1(100);
    Csmp1 d2 = 200;
    Csmp1 d3 = Csmp1(300);

    d1.disp(); // x=100
    d2.disp(); // x=200
    d3.disp(); // x=300

    d3 = Csmp1(400);
    d3.disp(); // x=400

    return 0;
}
