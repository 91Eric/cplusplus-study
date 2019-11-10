#include <iostream>
using namespace std;

class Inherit
{
    public:
        // Inherit(){}
        Inherit(int j){}
        Inherit(const Inherit &j){}
};

class Outter
{
    private:
        int j;
    public:
        Outter()
        {
            j = 1;
            cout << j << endl;
        }
        Outter(int j)
        {
            j = j + 1;
        }
};

class Test
{
    private:
        const int i;
        Inherit tt;
        Outter ot;
    public:
        Test(int i):i(i), tt(i)
        {
            cout << "Test" << endl;
        }
};

class Test2
{
    private:
        const int i;
    public:
        Test2(int i):i(i)
        {
        }
        int set_i(int j)
        {
            int *p = const_cast<int*>(&i);
            *p = j;
        }
        int get_i()
        {
            return i;
        }
};

int main(int argc, char const *argv[])
{
    Test2 t(2);
    cout << t.get_i()<<endl;
    t.set_i(4);
    cout << t.get_i()<<endl;

    return 0;
}


