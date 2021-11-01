#include <iostream>
#include "complex.h"
using namespace std;

int main()
{
    Complex c1(4,5);
    c1.print();

    Complex c2(6,5);
    c2.print();

    Complex c3=c1+c2;
    c3.print();

    Complex c4=c1-c2;
    c4.print();

    Complex c5=c1*c2;
    c5.print();

    c4=c3=c5;
    c4.print();

    c4++;
    c4.print();
    ++c4;
    c4.print();

    return 0;
}
