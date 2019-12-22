#include <iostream>
using namespace std;

class Parent
{
public:
    void test()
    {
        cout << "Parent::test()" << endl;
    }
    void func()
    {

    }
};

class Child : protected Parent
{
public:
    using Parent::test;
public:
    void func()
    {

    }
};

int main()
{
    Child c;
    c.test();
    Parent &p = c;
    p.test();
}