#include <iostream>

using namespace std;

class Parent
{
private:
    int m_private;
protected:
    int m_protected;
public:
    int m_public;
public:
    Parent():m_protected(10)
    {

    }

    int get_value()
    {
        return m_protected;
    }

};

class Child1 : public Parent
{
private:
    /* data */
public:
    Child1();
    ~Child1();
};

Child1::Child1()
{
    m_protected = 20;
    m_public = 10;      // 这两个都可以在子类内部实现
    m_private = 30;     // 不可访问，因为private只能在本类内部使用
}

Child1::~Child1()
{
}

int main()
{
    Parent p1;

    p1.m_public = 10;
    p1.m_protected = 1;     // protected 只能类和直接子类访问，类对象是不能使用的
    p1.m_private = 1;       // private 只能在类内部使用，类对象不能使用

    Child1 c1;
    c1.m_public = 20;
    c1.m_protected = 1;     // protected 只能类和直接子类访问，子类对象是不能使用的
    c1.m_private = 1;       // private 只能在类内部使用，子类对象不能使用

    return 0;
}

