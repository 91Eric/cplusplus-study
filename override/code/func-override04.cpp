#include <cstdio>

void test(int i)
{
    printf("test(int i)\n");
}

void test(int i, int c = 0)
{
    printf("test(int i, int c = 0)\n");
}


int main()
{
    test(1);    // 无法判定使用哪个
    return 0;
}