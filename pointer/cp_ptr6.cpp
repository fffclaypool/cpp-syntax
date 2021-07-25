#include <iostream>
using namespace std;

void english(int dt);
void japanese(int dt);

int main()
{
    int a = 123;
    // declare a pointer to the function:putdt
    void (*putdt)(int);

    putdt = english;
    putdt(a);
    putdt = japanese;
    putdt(a);

    return 0;
}

void english(int dt)
{
    cout << "value is " << dt << "\n"; // value is 123
}

void japanese(int dt)
{
    cout << "数値は" << dt << "です\n"; // 数値は123です
}
