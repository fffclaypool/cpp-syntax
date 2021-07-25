#include <iostream>
using namespace std;

class ClsX
{
private:
    int x;

public:
    ClsX(int n) { x = n; }
    void disp() { cout << "x=" << x << "\n"; }
    friend class ClsA;
};

class ClsA
{
private:
    int a;

public:
    ClsA(int n) { a = n; }
    void disp() { cout << "a=" << a << "\n"; }
    bool eq(ClsX obj);
    void swap(ClsX &obj);
    void disp_ab(ClsX obj);
};

bool ClsA::eq(ClsX obj)
{
    return a == obj.x;
}
void ClsA::swap(ClsX &obj)
{
    int tmp = a;
    a = obj.x;
    obj.x = tmp;
}
void ClsA::disp_ab(ClsX obj)
{
    cout << "a=" << a << " x=" << obj.x << "\n";
}

int main()
{
    int n;
    ClsA aa(100);
    ClsX xx(120);

    aa.disp();      // a=100
    xx.disp();      // x=120
    aa.disp_ab(xx); // a=100 x=120

    aa.swap(xx);
    aa.disp_ab(xx); // a=120 x=100

    n = aa.eq(xx);
    cout << "n=" << n << "\n"; // n=0

    return 0;
}
