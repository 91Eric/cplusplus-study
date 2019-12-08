#include <iostream>

using namespace std;

class Test
{
private:
    int m_value;
public:
    Test(int i)
    {
        m_value = i;
    }

    const int get_value() const
    {
        return m_value;
    }
    bool operator &&(const Test &oth)
    {
        cout << "&&" << endl;
        return this->m_value && oth.m_value;
    }

    bool operator ||(const Test &oth)
    {
        return this->m_value || oth.m_value;
    }
};

Test func(Test i)
{
    cout << i.get_value() << endl;
    return i;
}

int main()
{
    Test t1(0), t2(1);

    if (func(t1) && func(t2))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

}