#include <iostream>
using namespace std;

class Stmbr
{
private:
    int nn;
    static int ct;

public:
    Stmbr(int n = 0)
    {
        nn = n;
        ++ct;
    }
    Stmbr(const Stmbr &obj)
    {
        nn = obj.nn;
        ++ct;
    }
    ~Stmbr() { --ct; }
    void disp();
    static void st_disp();
};

int Stmbr::ct = 0;

void Stmbr::disp()
{
    cout << "ct=" << ct << " nn=" << nn << "\n";
}

void Stmbr::st_disp()
{
    cout << "CT=" << ct << "\n";
}

int main()
{
    Stmbr::st_disp(); // CT=0

    Stmbr d1 = 10;
    d1.disp();    // ct=1 nn=10
    d1.st_disp(); // CT=1

    Stmbr d2(d1);
    d2.disp();    // ct=2 nn=10
    d2.st_disp(); // CT=2

    Stmbr *pp = new Stmbr[6];
    pp->disp();       // ct=8 nn=0
    d1.st_disp();     // CT=8
    d2.st_disp();     // CT=8
    pp->st_disp();    // CT=8
    Stmbr::st_disp(); // CT=2

    delete[] pp;
    d1.st_disp();

    return 0;
}
