#include <iostream>
#include <string>
using namespace std;

class Price
{
public:
    int regular_price;
    int reduced_price;
    int preferential_price;
    Price(int t = 0, int w = 0, int y = 0)
    {
        regular_price = t;
        regular_price = w;
        preferential_price = y;
    }
};

class Goods
{
public:
    string name;
    int stock;
    Price price;
    Goods(string s, int z, int t, int w, int y)
    {
        name = s;
        stock = z;
        price = Price(t, w, y);
    }
    void disp()
    {
        cout << "name=" << name << "\n";                                   // name=B38
        cout << "stock=" << stock << "\n";                                 // stock=12
        cout << "regular_price=" << price.regular_price << "\n";           // regular_price=750
        cout << "reduced_price=" << price.reduced_price << "\n";           // reduced_price=3
        cout << "preferential_price=" << price.preferential_price << "\n"; // preferential_price=700
    }
};

int main()
{
    Goods s("B38", 12, 800, 750, 700);
    s.disp();
    return 0;
}
