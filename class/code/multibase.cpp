#include <iostream>

using namespace std;

class Base1
{
private:
    int m_i;
public:
    Base1(int i):m_i(i){}
    int get_i()
    {
        return m_i;
    }
};

class Base2
{
private:
    int m_j;
public:
    Base2(int j):m_j(j){}
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
            << "m_j = " << get_j() << endl;
    }
};

int main()
{
    Derived d(1, 2);

    // 子类继承父类函数
    d.print();
    cout << d.get_i() << " , " << d.get_j() << endl;

    // 赋值兼容性
    Base1 *b1 = &d;
    Base2 *b2 = &d;
    cout << "base1 " << b1->get_i() << endl;
    cout << "base2 " << b2->get_j() << endl;

    if ((void*)b1 == (void*)b2)
    {
        cout << "equal" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }

    return 0;
}