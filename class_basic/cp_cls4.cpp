#include <iostream>
using namespace std;

union UNIsmp {
private:
    int dt;
    char ch[4];
public:
    void set_dt(int n) { dt = n; }
    void disp_int() { cout << hex << dt << "\n"; }
    void disp_chr();
};

void UNIsmp::disp_chr()
{
    for (int i=0; i<=3; i++)
        cout << ch[i] << " ";
    cout << "\n";
}

int main()
{
    UNIsmp a;

    a.set_dt(0x41424344);
    a.disp_int(); // 41424344
    a.disp_chr(); // D C B A

    return 0;
}
