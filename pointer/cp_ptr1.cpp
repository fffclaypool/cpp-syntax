#include <iostream>
using namespace std;

int main()
{
    int *p, a = 100, b = 200;

    p = &a;
    cout << "a=" << a << " *p=" << *p << "\n"; // a=100 *p=100

    p = &b;
    cout << "b=" << b << " *p=" << *p << "\n"; // b=200 *p=200

    b = 300;
    cout << "b=" << b << " *p=" << *p << "\n"; // b=300 *p=300

    *p = 400;
    cout << "b=" << b << " *p=" << *p << "\n"; // b=400 *p=400

    return 0;
}
