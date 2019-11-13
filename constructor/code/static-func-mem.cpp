#include <cstdio>

class Test
{
    private:
        static int j;
    public:
        static int i;
        int geti()
        {
            return i;
        }
        static int getj()
        {
            return j;
        }
        static void seti(int value)
        {
            i = value;
            j = value + 1;
        }
};

// 必须初始化
int Test::i = 1;
int Test::j = 1;

int main(int argc, char const *argv[])
{

    Test t;
    printf("i = %d\n", t.geti());
    Test::seti(3);
    printf("i = %d\n", t.getj());
    return 0;
}
