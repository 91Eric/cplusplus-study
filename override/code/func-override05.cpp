#include <cstdio>

class Base
{

};

class Derived : public Base
{

};

void test(Base *b)
{

}

int main(int argc, char const *argv[])
{
    Derived d;
    test(&d);
    return 0;
}

