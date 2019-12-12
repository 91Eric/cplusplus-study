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
    Child1()
    {
        m_protected = 20;
        m_public = 10;      // 这两个都可以在子类内部实现
        // m_private = 30;     // 不可访问，因为private只能在本类内部使用

    }
    ~Child1()
    {}
};

class Child2 : protected Parent
{
public:
    Child2 ()
    {
        m_protected = 20;
        m_public = 10;      // 这两个都可以在子类内部实现
        // m_private = 30;     // 不可访问，因为private只能在本类内部使用
    }
    ~Child2 ();
};

class Child3 : private Parent
{
public:
    Child3()
    {
        m_public = 0;       // public可以在子类内部使用，但是由于是protected继承，
                            // 因此属性变为protected，子类对象不可使用，见c2
        m_protected = 0;   // ptotected 可以在子类内部使用，但是子类对象不可以，见c2
    }
    ~Child3();
};

class GrandChild1 : public Child1
{
private:
    /* data */
public:
    GrandChild1()
    {
        m_public = 11;
        m_protected = 0;
    }
    ~GrandChild1();
};

class GrandChild2 : public Child2
{
private:
    /* data */
public:
    GrandChild2()
    {
        m_public = 11;
        m_protected = 0;
    }
    ~GrandChild2();
};

int main()
{
    // p1 和 c1 都不能访问protected和private
    Parent p1;
    p1.m_public = 10;
    p1.m_protected= 20;
    p1.m_private = 30;

    Child1 c1;
    c1.m_public = 20;
    c1.m_protected= 20;
    c1.m_private = 30;

    // 由于Child2 是protected继承，那么父类的public成员就会被限制为protected
    // protected只能是雷内和直接子类内部，类成员是不能访问的
    Child2 c2;
    c2.m_public= 20;
    c2.m_protected= 20;
    c2.m_private = 30;

    // gc1 是public 继承Child1，而Child1是public继承自Parent，
    // 那么在Child1中，所有的成员访问属性不变，那么服了public在Child1中还是
    // public，因此GrandChild1 public继承Child1后，public属性可以在子类访问
    GrandChild1 gc1;
    gc1.m_public = 3;

    return 0;
}

