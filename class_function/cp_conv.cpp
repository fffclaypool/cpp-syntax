#include <iostream>
using namespace std;

class Byte2
{
private:
    char c1, c2;

public:
    Byte2(int n = 0)
    {
        c1 = (n & 0xff00) / 256;
        c2 = n & 0xff;
    }
    Byte2(char a, char b)
    {
        c1 = a;
        c2 = b;
    }
    operator int() { return c1 * 256 + c2; }
    void disp() { cout << "c1=" << c1 << " c2=" << c2 << "\n"; }
};

void func(Byte2 x)
{
    x.disp();
}

int main()
{
    Byte2 b1('A', 'B');
    Byte2 b2 = 0x4344;
    int idt;

    b1.disp(); // c1=A c2=B
    b2.disp(); // c1=C c2=D

    b2 = 0x4546;
    b2.disp(); // c1=E c2=F

    func(0x4546); // c1=E c2=F

    idt = b1;
    cout << hex << idt << "\n"; // 4142

    idt = 0x1000 + b1;
    cout << hex << idt << "\n"; // 5142

    return 0;
}
