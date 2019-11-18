#include <cstdio>

class Complex
{
    public:
        int x;
        int y;
    public:
        Complex(): x(0), y(0)
        {

        }
        Complex(int x, int y)
        {
            printf("Complex\n");
            this->x = x;
            this->y = y;
        }
        Complex(const Complex& oth)
        {
            printf("Complex&\n");
            x = oth.x;
            y = oth.y;
        }
        Complex& operator +(const Complex& p2)
        {
            printf("class\n");

            this->x = this->x + const_cast<Complex&>(p2).x;
            this->y = this->y + const_cast<Complex&>(p2).y;
            
            return *this;
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
    Complex c3(2, 3);

    Complex c4 = c1 + c2 + c3;
    printf("%d\n", c4.x);
    return 0;
}
