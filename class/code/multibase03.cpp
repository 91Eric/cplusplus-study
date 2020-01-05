#include <iostream>

using namespace std;

class Parent
{
private:
    int m_p;
public:
    Parent(int i):m_p(i)
    {
        cout << "Parent" << endl;
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

class Base1 : virtual public Parent
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

class Base2 : virtual public Parent
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
    Derived(int i, int j) : Base1(i), Base2(j), Parent(j)
    {
    }
    void print()
    {
        cout << "m_i = " << get_i() << " , "
            << "m_j = " << get_j() << " , "
            << "Bas1::m_p =" << Base1::get_p() << " , "
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