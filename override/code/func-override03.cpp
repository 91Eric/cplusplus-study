#include <cstdio>

class Test
{
    public:
        void test()
        {
            printf("void test()\n");
        }
        void test() const
        {
            printf("void test() const\n");
        }
        
};

int main(int argc, char const *argv[])
{
    Test t1;
    const Test ct1;
    t1.test();
    ct1.test();
    return 0;
}
