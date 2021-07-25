#include <iostream>
using namespace std;

class Mystr
{
private:
    char *text;
    int len(char *s)
    {
        int n = 0;
        while (*s++)
        {
            ++n;
        }
        return n;
    }
    void copy(char *s)
    {
        for (int n = 0; *(text + n) = *s++; n++)
        {
            ;
        }
    }

public:
    Mystr(char *ss = "");
    Mystr(const Mystr &obj);
    ~Mystr() { delete[] text; }
    void disp() { cout << "text=" << text << "\n"; }
    Mystr &operator=(const Mystr &obj);
};

Mystr::Mystr(char *ss)
{
    text = new char[len(ss) + 1];
    copy(ss);
}

Mystr::Mystr(const Mystr &obj)
{
    text = new char[len(obj.text) + 1];
    copy(obj.text);
}

Mystr &Mystr::operator=(const Mystr &obj)
{
    if (this != &obj)
    {
        delete[] text;
        text = new char[len(obj.text) + 1];
        copy(obj.text);
    }
    return *this;
}

int main()
{
    Mystr s1("abcd");
    Mystr s2 = s1;
    s2.disp();

    Mystr s3;
    s3 = s1;
    s3.disp();

    return 0;
}
