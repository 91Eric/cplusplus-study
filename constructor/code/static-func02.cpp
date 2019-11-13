#include <cstdio>
class B
{
    public:
        void test()
        {
            printf("B::test()\n");
        }
        static void static_test()
        {
            printf("B::static_test()\n");
        }
};

class Test
{
    public:
        static void test()
        {
            B b;
            b.test();
            b.static_test();
        }
};

int main(int argc, char const *argv[])
{

    Test::test();
    return 0;
}