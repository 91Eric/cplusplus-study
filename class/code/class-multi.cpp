#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void test()   // 声明的时候带virtual就是虚函数
    {
        cout << "Parent" << endl;
    }
};

class Child : public Parent
{
public:
    void test() // 默认就是自带virtual 加不加都没问题
    {
        cout << "Child" << endl;
    }
};

int main()
{

    Child c1;
    Parent p1;
    Parent &rp1 = c1;
    Parent &rp2 = p1;

    rp1.test();
    rp2.test();

    return 0;
}