#include <iostream>
#include <string>
using namespace std;

namespace spc1
{
    void aaa() { cout << "this is function:aaa in spc1\n"; }
}

void aaa()
{
    cout << "this is function:aaa in global area\n";
}

using namespace spc1;

int main()
{
    // aaa();     // error: can't resolve scope

    spc1::aaa(); // this is function:aaa in spc1
    ::aaa();     // this is function:aaa in global area

    return 0;
}
