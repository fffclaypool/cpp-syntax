#include <iostream>
#include <string>
using namespace std;

class OUTcls {
public:
    int out_mbr;
    enum { enum_mbr = 10 };
    static const int cnst_mbr = 20;
    static int sttc_mbr;

    class INcls {
    public:
        int in_mbr;
        INcls(int n=0) {
            in_mbr = n;
        }
        void in_disp() {
            cout << "in: in_mbr=" << in_mbr << "\n";
            cout << "in: enum_mbr=" << enum_mbr << "\n";
            cout << "in: cnst_mbr=" << cnst_mbr << "\n";
            cout << "in: sttc_mbr=" << sttc_mbr << "\n";
        }
    };
    INcls incls;

    OUTcls(int outdt, int indt) {
        out_mbr = outdt;
        incls = INcls(indt);
    }
    void out_disp() {
        cout << "out: out_mbr=" << out_mbr << "\n";
        cout << "out: enum_mbr=" << enum_mbr << "\n";
        cout << "out: cnst_mbr=" << cnst_mbr << "\n";
        cout << "out: sttc_mbr=" << sttc_mbr << "\n";
        cout << "out: incls.in_mbr=" << incls.in_mbr << "\n";
        incls.in_disp();
    }
};

int OUTcls::sttc_mbr = 30;

int main()
{
    OUTcls a(100, 200);

    a.out_disp();
    a.incls.in_disp();
    a.out_mbr = 800;
    a.incls.in_mbr = 900;
    a.out_disp();

    return 0;
}

/*
    out: out_mbr=100
    out: enum_mbr=10
    out: cnst_mbr=20
    out: sttc_mbr=30
    out: incls.in_mbr=200
    in: in_mbr=200
    in: enum_mbr=10
    in: cnst_mbr=20
    in: sttc_mbr=30
    in: in_mbr=200
    in: enum_mbr=10
    in: cnst_mbr=20
    in: sttc_mbr=30
    out: out_mbr=800
    out: enum_mbr=10
    out: cnst_mbr=20
    out: sttc_mbr=30
    out: incls.in_mbr=900
    in: in_mbr=900
    in: enum_mbr=10
    in: cnst_mbr=20
    in: sttc_mbr=30
*/
