#include <iostream>
using namespace std;

namespace spc1
{
    int dt;
    void disp()
    {
        cout << "spc1_dt=" << dt << "\n";
    }
}

namespace spc2
{
    int dt;
    void disp()
    {
        cout << "spc2_dt=" << dt << "\n";
    }
}

int dt;
void disp()
{
    cout << "global_dt=" << dt << "\n";
}

int main()
{
    spc1::dt = 100;
    spc2::dt = 200;
    dt = 300;

    spc1::disp(); // spc1_dt=100
    spc2::disp(); // spc2_dt=200
    disp();       // global_dt=300

    return 0;
}
