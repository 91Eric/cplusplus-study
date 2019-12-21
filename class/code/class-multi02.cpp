#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void test()   // 声明的时候带virtual就是虚函数
    {
        cout << "Parent" << endl;
    }
    virtual void test(int i)
    {
        cout << "Parent i" << endl;
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

void func(Parent *p)
{
    p->test();      // 动态联编
}

int main()
{

    Child c1;
    c1.test();      // 静态联编   调用子类的

    Parent p1;

    func(&c1);
    func(&p1);

    return 0;
}