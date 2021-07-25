#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void setname(string s);
    void setage(int n);
    void disp();
};

void Person::setname(string s)
{
    name = s;
}
void Person::setage(int n)
{
    if (n < 0)
        age = 0;
    else
        age = n;
}
void Person::disp()
{
    cout << "name=" << name << " age=" << age << "\n";
}

int main()
{
    Person dt;
    // dt.name = "Mike Johnson";
    // dt.age = 30;
    dt.setname("Mike Johnson");
    dt.setage(-10);
    dt.disp(); // name=Mike Johnson age=0

    return 0;
}
