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

    c1.test();
    c1.Parent::test();

    return 0;
}