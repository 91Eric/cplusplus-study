#include <iostream>
using namespace std;

class Parent
{
private:
    virtual void test()
    {
        cout << "Parent::test()" << endl;
    }

};

class Child : public Parent
{
public:
    void test()
    {
        cout << "Child::test()" << endl;
    }
    void func()
    {

    }
};

int main()
{
    Child c;
    c.test();
    // Parent &p = c;
    // p.test();
}