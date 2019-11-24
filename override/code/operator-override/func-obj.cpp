#include <iostream>

using namespace std;

class Fib
{
    private:
        int m_a0;
        int m_a1;
    public:
        // 默认从第1项开始
        Fib():m_a0(0), m_a1(1)
        {
            
        }
        // 指定从第几项开始的数列
        Fib(int start):m_a0(0), m_a1(1)
        {
            for (int i = 2; i <= start; i++)
            {
                int t = m_a1;
                m_a1 = m_a0 + m_a1;
                m_a0 = t;
            }
        }
        // 每一次计算都会计算出下一次的值,返回要求的项的值
        int operator ()()
        {
            int ret = m_a1;
            m_a1 = m_a0 + m_a1;
            m_a0 = ret;

            return ret;
        }
};

int main(int argc, char const *argv[])
{
    Fib fib1;
    int i = 10;
    while (i-- > 0)
    {
        cout << fib1() << endl;
    }

    cout << "..." << endl;
    Fib fib2(3);
    cout << fib2() << endl;

    return 0;
}
