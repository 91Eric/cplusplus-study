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
    void test()
    {
        cout << "Child" << endl;
    }
};

int main()
{

    Child c1;
    Parent p1(c1);
    p1.test();
    Parent *pp1 = &c1;
    pp1->test();

    return 0;
}