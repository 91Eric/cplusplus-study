#include <iostream>
using namespace std;

class Test
{
    private:
        int i;
        int *p;
    public:
        Test(int i)
        {
            p = new int(i);
            i = i + 2;
        }
        Test(const Test &other)
        {
            p = new int(*(other.p));
            i = other.i;
        }
        ~Test()
        {
            delete p;
        }
};

int main(int argc, char const *argv[])
{
    Test t(1);
    Test t2 = t;
    return 0;
}
