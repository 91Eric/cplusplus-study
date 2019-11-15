#include <stdio.h>

class Test
{
    private:
        int m_i;
        int *m_pi;
    private:
        // 私有！！
        Test(int i): m_i(i), m_pi(nullptr)
        {
        }

        bool init(int j)
        {
            m_pi = new int(j);
            if (m_pi)
            {
                return true;
            }
            return false;
        }
    public:
        // 提供静态成员函数作为实际履行构造函数功能的函数，可以重载几个
        static Test *new_instance(int i, int j)
        {
            // 这里注意，静态成员函数不能直接调用普通的类成员函数，
            // 但是构造函数不是普通的成员函数
            Test *ret = new Test(i);
            
            if (!(ret && ret->init(j)))
            {
                delete ret;
                return nullptr;
            }

            return ret;
        }
        void output()
        {
            printf("m_i = %d\n", m_i);
            printf("m_pi = %d\n", *m_pi);
        }
};

int main(int argc, char const *argv[])
{
    Test *p = Test::new_instance(1, 2);
    if(!p)
    {
        // 失败，进行错误处理
        printf("Create instance failed\n");
        return -1;
    }
    // 成功，
    p->output();
    return 0;
}
