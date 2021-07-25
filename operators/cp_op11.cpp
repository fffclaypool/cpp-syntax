#include <iostream>
#include <cstdlib>
using namespace std;

class Str80
{
private:
    char text[81];
    int len(char *s)
    {
        int n = 0;
        while (*s++)
        {
            ++n;
        }
        return n;
    }
    void copy80(const char *s)
    {
        int n;
        for (n = 0; n < 80 && *s; n++)
        {
            text[n] = *s++;
        }
        text[n] = '\0';
    }

public:
    Str80(const char *ss = "") { copy80(ss); }
    void disp() { cout << "text=" << text << "\n"; }
    char &operator[](int n);
};

char &Str80::operator[](int n)
{
    if (n < 0 || n >= len(text))
    {
        cout << "添字が範囲外\n";
        exit(1);
    }
    return text[n];
}

int main()
{
    Str80 ss("ABCD");
    char ch;

    ss.disp(); // text=ABCD
    ch = ss[2];
    cout << ch << "\n"; // C
    ss[2] = 'X';
    ss.disp(); // text=ABCD

    return 0;
}
