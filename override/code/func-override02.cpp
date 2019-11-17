#include <cstdio>


void func(int i, double d)
{
    printf("void func(int i, double d)\n");
}

void func(int i, double d, int j)
{
    printf("void func(int i, double d, int j)\n");
}

int main(int argc, char const *argv[])
{
    func(1,  1.0);
    func(1,  1.0, 1);
    return 0;
}
