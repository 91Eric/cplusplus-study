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
        friend Complex operator +(const Complex& p1, const Complex& p2);
};

Complex operator +(const Complex& p1, const Complex& p2)
{
    Complex ret;
    ret.x = p1.x + p2.x;
    ret.y = p1.y + p2.y;
    return ret;
}

int main(int argc, char const *argv[])
{
    Complex c1(1, 2);
    Complex c2(2, 3);
    Complex c3 = operator +(c1, c2);    // 调用方式1
    Complex c4 = c3 + c2;               // 调用方式2

    return 0;
}
