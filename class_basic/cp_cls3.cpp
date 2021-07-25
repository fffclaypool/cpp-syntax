#include <iostream>
using namespace std;

class CLsmp
{
    int a; // class is default private
public:
    void set_a(int n) { a = n; }
    int get_a() { return a; }
};

struct STsmp
{
private:
    int a;

public:
    void set_a(int n) { a = n; }
    int get_a() { return a; }
};

int main()
{
    CLsmp cc;
    STsmp ss;

    cc.set_a(100);
    cout << cc.get_a() << "\n"; // 100

    ss.set_a(200);
    cout << ss.get_a() << "\n"; // 200

    return 0;
}
