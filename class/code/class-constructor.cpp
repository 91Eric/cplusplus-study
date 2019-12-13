#include <iostream>

using namespace std;

class Other
{
public:
    Other()
    {
        cout << "Other()" << endl;
    }
    ~Other()
    {
        cout << "~Other()" << endl;
    }
};

class Parent
{
private:
    int m_private;
public:
    Parent():m_private(10)
    {
        cout << "Parent()" << endl;
    }
    Parent(int i):m_private(i)
    {
        cout << "Parent(int i)" << endl;
    }

    virtual ~Parent()
    {
        cout << "~Parent()" << endl;
    }

};

class Child : public Parent
{
private:
    Other m_other;
public:
    Child()
    {
        cout << "Child()" << endl;
    }
    Child(int i) : Parent(i)
    {
        cout << "Child(int i)" << endl;
    }
    ~Child()
    {
        cout << "~Child()" << endl;
    }
};


int main()
{
    Child c;
    return 0;
}

