#include <iostream>
#include <string>
using namespace std;

namespace spc1
{
    string sss = "this is function:sss of spc1";
    void aaa() { cout << "this is function:aaa of spc1\n"; }
    void bbb() { cout << "this is function:bbb of spc1\n"; }
}

namespace spc2
{
    string sss = "this is function:sss of spc2";
    void aaa() { cout << "this is function:aaa of spc2\n"; }
    void bbb() { cout << "this is function:bbb of spc2\n"; }
}

using namespace spc1;

int main()
{
    cout << sss << "\n"; // this is function:sss in spc1
    aaa();               // this is function:aaa in spc1
    bbb();               // this is function:bbb in spc1

    cout << spc2::sss << "\n"; // this is function:sss in spc2
    spc2::aaa();               // this is function:aaa in spc2
    spc2::bbb();               // this is function:bbb in spc2

    return 0;
}
