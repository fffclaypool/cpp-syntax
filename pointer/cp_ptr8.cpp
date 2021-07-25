#include <iostream>
using namespace std;

void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);

void calculate(void (*calc)(int, int), int n1, int n2);

int main()
{
    calculate(addition, 100, 20);
    calculate(subtraction, 100, 20);
    calculate(multiplication, 100, 20);
    calculate(division, 100, 20);

    return 0;
}

void calculate(void (*calc)(int, int), int n1, int n2)
{
    calc(n1, n2);
}

void addition(int a, int b)
{
    cout << "add=" << a + b << "\n"; // add=120
}

void subtraction(int a, int b)
{
    cout << "sub=" << a - b << "\n"; // sub=80
}

void multiplication(int a, int b)
{
    cout << "mul=" << a * b << "\n"; // mul=2000
}

void division(int a, int b)
{
    cout << "div=" << a / b << "\n"; // div=5
}
