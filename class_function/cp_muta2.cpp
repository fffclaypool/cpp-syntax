#include <iostream>
using namespace std;

class ClsA
{
private:
    int dt;

public:
    ClsA(int n) { dt = n; }
    void set(int n) { dt = n; }
    void disp_cn() const { cout << "dt=" << dt << "\n"; }
};

int main()
{
    ClsA a(100);
    a.disp_cn();
    a.set(200);
    a.disp_cn();

    const ClsA b(300);
    b.disp_cn();
    // b.set(400);

    return 0;
}
