#include <iostream>
using namespace std;

int cpsmp1_id = 0;

class CPsmp1
{
private:
    int dt, ID;

public:
    CPsmp1(int n)
    {
        dt = n;
        ID = ++cpsmp1_id;
    }
    void disp() { cout << "dt=" << dt << " ID=" << ID << "\n"; }
};

int cpsmp2_id = 0;

class CPsmp2
{
private:
    int dt, ID;

public:
    CPsmp2(int n)
    {
        dt = n;
        ID = ++cpsmp2_id;
    }
    CPsmp2(const CPsmp2 &obj)
    {
        dt = obj.dt;
        ID = ++cpsmp2_id;
    }
    void disp() { cout << "dt=" << dt << " ID=" << ID << "\n"; }
};

int main()
{
    CPsmp1 a(10);
    CPsmp1 b(a);
    CPsmp1 c = a;

    a.disp(); // dt=10 ID=1
    b.disp(); // dt=10 ID=1
    c.disp(); // dt=10 ID=1

    CPsmp2 d(20);
    CPsmp2 e(d);
    CPsmp2 f = d;

    d.disp(); // dt=20 ID=1
    e.disp(); // dt=20 ID=2
    f.disp(); // dt=20 ID=3

    return 0;
}
