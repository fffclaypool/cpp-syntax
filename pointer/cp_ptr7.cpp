#include <iostream>
using namespace std;

void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);

void (*keisan[4])(int, int) = {addition, subtraction, multiplication, division};

int main()
{
    int i;

    for (i = 0; i <= 3; i++)
        keisan[i](100, 20);

    return 0;
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
