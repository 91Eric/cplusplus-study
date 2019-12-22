class Parent
{
private:
    int m_i;
    // 虚函数
    virtual void test() = 0;    // private 不影响子类重写，控制符只控制访问权限
public:
    void func();
};

class Child : public Parent
{
private:
    void test()
    {

    }
};

int main()
{
    Child c;
}