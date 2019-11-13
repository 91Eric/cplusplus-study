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
        static int j;
    public:
        static void get()
        {
            B b;
            b.test();
            b.static_test();
        }
        static int getj()
        {
            return j;
        }
};

int main(int argc, char const *argv[])
{

    Test t;
    t.get();
    printf("j = %d\n", t.getj());
    return 0;
}