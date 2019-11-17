#include <cstdio>


void func(int i, double d)
{
    printf("void func(int i, double d)\n");
}

void func(double d, int i)
{
    printf("void func(double d, int i)\n");
}

int main(int argc, char const *argv[])
{
    func(1.0,  1);
    func(1,  1.0);
    // func(1.0,  1.0); // 二义性
    return 0;
}
