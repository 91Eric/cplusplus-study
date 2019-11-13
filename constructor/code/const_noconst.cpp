#include <cstdio>

class a
{

    public:
        void test()
        {
            printf("test");
        }
        void test() const
        {
            printf("test const");
        }
};

int main()
{
    a a1;
    a1.test();
    const a a2;
    a2.test();
    return 0;
}