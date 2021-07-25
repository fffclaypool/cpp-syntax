#include <iostream>
using namespace std;

class Csmp0
{
private:
    int x;

public:
    Csmp0();
    void disp() { cout << "x=" << x << "\n"; }
};

Csmp0::Csmp0()
{
    x = 999;
}

int main()
{
    Csmp0 dt;
    dt.disp(); // x=999

    return 0;
}
