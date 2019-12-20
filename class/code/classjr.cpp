#include <iostream>

using namespace std;

class Parent
{
public:
    void test()
    {
        cout << "Parent" << endl;
    }
};

class Child : public Parent
{
public:
    void test2()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Parent p1 = Child();
    p1.test2();
    Child c1;
    Parent p2 = c1;
    p2.test2();
    Parent *pp1 = &c1;
    pp1->test2();
    Parent &rp1 = c1;
    rp1.test2();
    return 0;
}


