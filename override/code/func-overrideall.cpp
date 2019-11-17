#include <cstdio>

class Test
{
    public:
        void test()
        {
            printf("void test()\n");
        }
        void test(int i, double d, int j)
        {
            printf("void test(int i, double d))\n");
        }
        // void test(double d, int i)
        // {
        //     printf("void test(double d, int i)\n");
        // }
        void test(char d, int i, int j)
        {
            printf("void test(char d, int i,, int j)\n");
        }
};

int main(int argc, char const *argv[])
{
    Test t1;

    t1.test();              // void test()
    t1.test(1, 1, 1);       // void test(char d, int i, int j)和 void test(int i, double d, int j)产生二义性
    t1.test('c', 1, 1);     // te test(char d, int i, int j)
    t1.test(1, 1.0, 1);     // voidst(int i, double d, int j)
    return 0;
}
