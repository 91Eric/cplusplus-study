#include <cstdio>

class Complex
{
    private:
        int x;
        int y;
    public:
        Complex(): x(0), y(0)
        {

        }
        Complex(int x, int y)
        {
            this->x = x;
            this->y = y;
        }
        Complex operator +(const Complex& p2)
        {
            printf("class\n");
            Complex ret;

            ret.x = this->x + p2.x;
            ret.x = this->y + p2.y;
            
            return ret;
        }
    friend Complex operator +(const Complex& p1, const Complex& p2);
};

Complex operator +(const Complex& p1, const Complex& p2)
{
    printf("friend\n");
    Complex ret;
    ret.x = p1.x + p2.x;
    ret.y = p1.y + p2.y;
    return ret;
}

int main(int argc, char const *argv[])
{
    Complex c1(1, 2);
    Complex c2(2, 3);
    Complex c3 = c1 + c2;
    return 0;
}
