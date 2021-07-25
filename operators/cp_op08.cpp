#include <iostream>
using namespace std;

class XYpos;
istream &operator>>(istream &ist, XYpos &obj);
ostream &operator<<(ostream &ost, XYpos obj);

class XYpos
{
private:
    int x, y;

public:
    XYpos(int n1 = 0, int n2 = 0)
    {
        x = n1;
        y = n2;
    }
    void disp() { cout << "(" << x << "," << y << ")\n"; }
    friend istream &operator>>(istream &ist, XYpos &obj);
    friend ostream &operator<<(ostream &ost, XYpos obj);
};

istream &operator>>(istream &ist, XYpos &obj)
{
    ist >> obj.x >> obj.y;
    return ist;
}

ostream &operator<<(ostream &ost, XYpos obj)
{
    ost << "(" << obj.x << "," << obj.y << ")";
    return ost;
}

int main()
{
    XYpos d1, d2(60, 70), d3(80, 90);

    cout << "Please input two values:";
    cin >> d1;
    cout << "input data is: " << d1 << "\n"; // input data is: (10,20)
    cout << d1 << d2 << d3 << "\n";          // (10,20)(60,70)(80,90)

    return 0;
}
