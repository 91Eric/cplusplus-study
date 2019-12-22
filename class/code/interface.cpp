class Parent
{
public:
   virtual void test() = 0;
   virtual void func() = 0;
};

class Child : public Parent
{
public:
    void test()
    {

    }
    void func()
    {

    }
};

int main()
{
    Child c;
}