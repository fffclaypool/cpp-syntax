#include <iostream>
using namespace std;

void swap_p(int *n1, int *n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void swap_r(int &n1, int &n2)
{
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main()
{
    int a = 100, b = 200;

    cout << "a=" << a << " b=" << b << "\n"; // a=100 b=200

    swap_p(&a, &b);
    cout << "a=" << a << " b=" << b << "\n"; // a=200 b=100

    swap_r(a, b);
    cout << "a=" << a << " b=" << b << "\n"; // a=100 b=200

    return 0;
}
