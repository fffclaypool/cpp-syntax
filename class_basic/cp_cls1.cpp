#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    void disp();
};

void Person::disp()
{
    cout << "name=" << name << " age=" << age << "\n";
}

int main()
{
    Person dt;

    dt.name = "Mike Johnson";
    dt.age = 30;
    dt.disp(); // name=Mike Johnson age=30

    return 0;
}
