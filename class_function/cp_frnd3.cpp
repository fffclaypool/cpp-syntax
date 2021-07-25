#include <iostream>
using namespace std;

class Base
{
private:
    enum
    {
        emb = 100
    };
    static int smb;
    int imb;
    friend class ClsA;
    friend class ClsB;
    friend class ClsC;
};
int Base::smb = 200;

class ClsA
{
private:
    int aa;

public:
    ClsA(int n) { aa = n; }
    void disp()
    {
        cout << "emb=" << Base::emb << " smb=" << Base::smb
             << " aa=" << aa << "\n";
    }
};

class ClsB : public Base
{
private:
    int bb;

public:
    ClsB(int n1, int n2)
    {
        bb = n1;
        imb = n2;
    }
    void disp()
    {
        cout << "emb=" << Base::emb << " smb=" << Base::smb
             << " bb=" << bb << " imb=" << imb << "\n";
    }
};

class ClsC
{
private:
    int cc;
    Base bs;

public:
    ClsC(int n1, int n2)
    {
        cc = n1;
        bs.imb = n2;
    }
    void disp()
    {
        cout << "emb=" << Base::emb << " smb=" << Base::smb
             << " cc=" << cc << " imb=" << bs.imb << "\n";
    }
};

int main()
{
    ClsA a(50);
    ClsB b(60, 65);
    ClsC c(70, 75);

    a.disp(); // emb=100 smb=200 aa=50
    b.disp(); // emb=100 smb=200 bb=60 imb=65
    c.disp(); // emb=100 smb=200 cc=70 imb=75

    return 0;
}
