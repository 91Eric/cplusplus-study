#include <iostream>

using namespace std;

class Test
{
private:
    int val;
public:
    Test(int i)
    {
        val = i;
    }
    int get_val()
    {
        return val;
    }
};

Test& func(Test &t)
{
    cout << t.get_val() << endl;

    return t;
}

Test& operator , (const Test& obj1, const Test& obj2)
{
    return const_cast<Test& >(obj2);
}

int main()
{
    Test t0(0);
    Test t1(1);

    Test tt = (func(t0), func(t1));

    cout << tt.get_val() << endl;
}