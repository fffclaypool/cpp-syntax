#include <iostream>
using namespace std;

class MPcls
{
public:
    int d1, d2;
    void add()
    {
        cout << "add:" << d1 << "+" << d2 << "=" << d1 + d2 << "\n";
    }
    void sub()
    {
        cout << "sub:" << d1 << "-" << d2 << "=" << d1 - d2 << "\n";
    }
    void disp(int mode)
    {
        if (mode == 1)
            cout << "d1=" << d1 << "\n";
        if (mode == 2)
            cout << "d2=" << d2 << "\n";
        if (mode == 3)
            cout << "d1=" << d1 << " d2=" << d2 << "\n";
    }
};

int main()
{
    MPcls a, b;
    int MPcls::*dp;
    void (MPcls::*fp0)();
    void (MPcls::*fp1)(int a);

    a.d1 = 110;
    a.d2 = 100;
    a.add();   // add:110+100=210
    a.sub();   // sub:110-100=10
    a.disp(1); // d1=110
    a.disp(2); // d2=100
    a.disp(3); // d1=110 d2=100

    dp = &MPcls::d1;
    a.*dp = 220;
    b.*dp = 440;

    dp = &MPcls::d2;
    a.*dp = 200;
    b.*dp = 400;

    fp0 = &MPcls::add;
    (a.*fp0)(); // add:220+200=420
    (b.*fp0)(); // add:440+400=840

    fp0 = &MPcls::sub;
    (a.*fp0)(); // sub:220-200=20
    (b.*fp0)(); // sub:440-400=40

    fp1 = &MPcls::disp;
    (a.*fp1)(3); // d1=220 d2=200
    (b.*fp1)(3); // d1=440 d2=400

    return 0;
}
