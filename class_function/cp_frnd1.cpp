#include <iostream>
using namespace std;

class Smpcls
{
private:
    int a;

public:
    Smpcls(int n) { a = n; }
    int get_a() { return a; }
    void mber_fnc();
    friend void frnd_fnc(Smpcls d);
};

void Smpcls::mber_fnc()
{
    cout << a << "\n";
}

void frnd_fnc(Smpcls d)
{
    cout << d.a << "\n";
}

void norm_fnc(Smpcls d)
{
    cout << d.get_a() << "\n";
}

int main()
{
    Smpcls dt(100);

    dt.mber_fnc(); //100
    norm_fnc(dt);  //100
    frnd_fnc(dt);  //100

    return 0;
}
