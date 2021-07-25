#include <iostream>
using namespace std;

class MyCls
{
public:
    int x, y;
    void copy_and_clear(MyCls &obj);
};

void MyCls::copy_and_clear(MyCls &obj)
{
    if (&obj == this)
        return;
    *this = obj;
    obj.x = obj.y = 0;
}

int main()
{
    MyCls d1, d2;

    d2.x = 10;
    d2.y = 20;
    d1.copy_and_clear(d2);
    cout << "d1: " << d1.x << " " << d1.y << "\n"; // d1: 10 20
    cout << "d2: " << d2.x << " " << d2.y << "\n"; // d2: 0 0

    d1.copy_and_clear(d1);
    cout << "d1: " << d1.x << " " << d1.y << "\n"; // d1: 10 20

    return 0;
}
