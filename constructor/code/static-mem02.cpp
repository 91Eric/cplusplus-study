#include <cstdio>

class Test
{
    public:
        static int j;
    public:
        int getj()
        {
            return j;
        }
};

int main(int argc, char const *argv[])
{
    Test t;
    printf("j = %d\n", t.getj());  // 会报错，提示未定义
    return 0;
}