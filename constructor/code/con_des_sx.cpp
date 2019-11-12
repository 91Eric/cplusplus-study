/**
 * 展示析构与构造函数调用顺序
*/
#include <iostream>

using namespace std;

class A
{
    private:
        int m_i;
    public:
        A(): m_i(0)
        {
            cout << "A()" << endl;
        }
        ~A()
        {
            cout << "~A()" << endl;
        }
};

class B
{
    private:
        A a1, a2;
    public:
        B()
        {
            cout << "B()" << endl;
        }
        ~B()
        {
            cout << "~B()" << endl;
        }
};

A a;
int main()
{
    B b;

    return 0;
}