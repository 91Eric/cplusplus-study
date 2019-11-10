class Test
{
    public:
        explicit Test(int i){}
        Test(){}
        Test(const Test& other)
        {

        }
};

int main()
{
    Test t;
    return 0;
}