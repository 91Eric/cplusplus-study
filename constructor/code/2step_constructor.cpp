#include <cstdio>

class Base
{
    private:
        int m_i;
    public:
        Base()
        {
            m_i = 10;
        }
        int get()
        {
            return m_i;
        }
        virtual void output()
        {
            printf("Base::m_i = %d\n", m_i);
        }
};
class Derived: public Base
{
    private:
        int m_j;
    public:
        Derived()
        {
            return;
            m_j = 11;
        }
        void output()
        {
            printf("Derived::m_i = %d\n", Base::get());
            printf("Derived::m_j = %d\n", m_j);
        }
};

int main(int argc, char const *argv[])
{
    Base *t = new Derived();
    t->output();

    delete t;
    return 0;
    
    return 0;
}
