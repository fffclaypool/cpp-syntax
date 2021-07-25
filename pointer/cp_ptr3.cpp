#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    if (argc < 3)
        return 1;
    cout << "argv0=" << argv[0] << "\n"; // argv0=./out
    cout << "argv1=" << argv[1] << "\n"; // argv1=aaaa
    cout << "argv2=" << argv[2] << "\n"; // argv2=bbbb

    return 0;
}
