#include <iostream>
using namespace std;

int main()
{
    cout << "__LINE__=" << __LINE__ << "\n";       // __LINE__=6
    cout << "__FILE__=" << __FILE__ << "\n";       // __FILE__=cp_mac.cpp
    cout << "__DATE__=" << __DATE__ << "\n";       // __DATE__=Jul 25 2021
    cout << "__TIME__=" << __TIME__ << "\n";       // __TIME__=23:57:21
    cout << "__cplusplus=" << __cplusplus << "\n"; // __cplusplus=199711

#ifdef __cplusplus
    cout << "C++ compiler boot";
#else
    cout << "C compiler boot";
#endif

    return 0;
}
