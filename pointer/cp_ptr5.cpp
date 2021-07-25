#include <iostream>
using namespace std;

int main()
{
    int d1[3] = {10, 20, 30};
    int d2[3] = {40, 50, 60};
    int *n[2] = {d1, d2};
    int **p = n;

    cout << *n[0] << "\n";       // 10
    cout << *(n[0] + 1) << "\n"; // 20
    cout << *n[1] << "\n";       // 40
    cout << *(n[1] + 1) << "\n"; // 50

    cout << **p << "\n";             // 10
    cout << *(*p + 1) << "\n";       // 20
    cout << **(p + 1) << "\n";       // 40
    cout << *(*(p + 1) + 1) << "\n"; // 50

    return 0;
}
