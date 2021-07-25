#include <iostream>
#include <cstring>
using namespace std;

class Mystring
{
public:
    char *text;

public:
    Mystring(char *ss);
    Mystring(const Mystring &obj);
    ~Mystring();
    void disp() { cout << "text=" << text << "\n"; }
};

Mystring::Mystring(char *ss)
{
    text = new char[strlen(ss) + 1];
    strcpy(text, ss);
}
Mystring::Mystring(const Mystring &obj)
{
    text = new char[strlen(obj.text) + 1];
    strcpy(text, obj.text);
}
Mystring::~Mystring()
{
    delete[] text;
}

int main()
{
    char *s = (char *)"abcde";
    Mystring ss1(s);
    Mystring ss2 = ss1;
    ss1.disp(); // text=abcde
    ss2.disp(); // text=abcde

    return 0;
}
