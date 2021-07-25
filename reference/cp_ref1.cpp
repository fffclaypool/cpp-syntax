#include <iostream>
using namespace std;

int main()
{
    int dt;
    int &rf = dt;  // declare a reference
    int *pt = &dt; // declare a pointer

    dt = 111;
    cout << dt << " " << rf << " " << *pt << "\n"; // 111 111 111

    rf = 222;
    cout << dt << " " << rf << " " << *pt << "\n"; // 222 222 222

    *pt = 333;
    cout << dt << " " << rf << " " << *pt << "\n"; // 333 333 333

    return 0;
}
