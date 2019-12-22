#include <iostream>

using namespace std;

class Base
{
public:
    int m_i;
    int m_k;
    const int *ci;
    static int m_j;
};

int main()
{
    cout << sizeof(Base) << endl;
    return 0;
}