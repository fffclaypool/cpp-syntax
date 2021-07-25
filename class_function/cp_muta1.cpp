#include <iostream>
using namespace std;

class ClsA
{
private:
    int dt;

public:
    ClsA(int n) { dt = n; }
    void set(int n) { dt = n; }
    void disp() { cout << "dt=" << dt << "\n"; }
};

int main()
{
    const ClsA a(100);
    // a.set(200); compile error
    // a.disp(); compile error

    return 0;
}
