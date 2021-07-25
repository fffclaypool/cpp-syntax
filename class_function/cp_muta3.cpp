#include <iostream>
using namespace std;

class Mcls
{
private:
    int a;
    mutable int m;
public:
    Mcls(int n1 = 0, int n2 = 0) { a = n1; m = n2; }
    void set_a(int n) { a = n; }
    void set_m(int n) const { m = n; }
    void disp() const{ cout << "a=" << a << " m=" << "\n"; }
};

int main()
{
    Mcls d1(10, 20);
    d1.disp();
    d1.set_a(30);
    d1.set_m(40);
    d1.disp();

    const Mcls d2(50, 60);
    d2.disp();
    // d2.set_a(70);
    d2.set_m(80);
    d2.disp();

    return 0;
}
