#include "complex.h"
#include "math.h"
#include "iostream"
Complex::Complex(int a, int b)
{
    this->a=a;
    this->b=b;
}

int Complex::GetA()
{
    return a;
}

int Complex::GetB()
{
    return b;
}

double Complex::getModulus()
{
    return sqrt(a*a+b*b);
}

void Complex::print()
{
    printf("%d+%di\n",a,b);
}

Complex Complex::operator +(Complex c)
{
    Complex ret;
    ret.a=this->a+c.a;
    ret.b=this->b+c.b;
    return ret;
}

Complex Complex::operator -(Complex c)
{
    Complex ret;
    ret.a=this->a-c.a;
    ret.b=this->b-c.b;
    return ret;
}

Complex Complex::operator *(Complex c)
{
    Complex ret;
    ret.a=this->a*c.a-this->b*c.b;
    ret.b=this->b*c.a+this->a*c.b;
    return ret;
}

Complex Complex::operator /(Complex c)
{
    Complex ret;
    int cd = c.a*c.a+c.b*c.b;

    ret.a = (this->a*c.a+this->b*c.b)/cd;
    ret.b = (this->b*c.a-this->a*c.b)/cd;

    return ret;
}

bool Complex::operator ==(Complex c)
{
    return (this->a == c.a) && (this->b == c.b);
}

bool Complex::operator !=(Complex c)
{
    return !((this->a == c.a) && (this->b == c.b));
}

Complex Complex::operator =(Complex c)
{
    this->a=c.a;
    this->b=c.b;
    return *this;
}

Complex &Complex::operator ++()
{
    ++a;
    ++b;
    return *this;
}

Complex Complex::operator ++(int)
{
    Complex m_c=*this;
    a++;
    b++;
    return m_c;
}



