#include <iostream>

using namespace std;

class Parent
{
private:
    int m_p;
public:
    Parent(int i):m_p(i)
    {

    }

    int get_p()
    {
        return m_p;
    }

    int* get_paddr()
    {
        return &m_p;
    }
    virtual ~Parent()
    {

    };
};

class Base1:public Parent
{
private:
    int m_i;
public:
    Base1(int i):m_i(i), Parent(i)
    {

    }
    int get_i()
    {
        return m_i;
    }
};

class Base2:public Parent
{
private:
    int m_j;
public:
    Base2(int j):m_j(j), Parent(j)
    {

    }
    int get_j()
    {
        return m_j;
    }
};

class Derived: public Base1, public Base2
{
public:
    Derived(int i, int j) : Base1(i), Base2(j)
    {
    }
    void print()
    {
        cout << "m_i = " << get_i() << " , "
            << "m_j = " << get_j() << " , "
            << "Bas1::m_p =" << Base1::get_p() << " , "     // 这里虽然都是获取父类的m_p但不是一个变量
            << "Bas2::m_p =" << Base2::get_p() <<endl;
        cout << "&Bas1::m_p " << Base1::get_paddr() << " , "
            << "&Bas2::m_p " << Base2::get_paddr() << endl;
    }
};

int main()
{
    Derived d(1, 2);

    d.print();

    return 0;
}