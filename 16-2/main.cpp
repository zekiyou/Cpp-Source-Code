#include <iostream>
#include "operator.h"
using namespace std;

int main()
{
    //main函数使用类 无需关心类如何实现 只需要使用.h
    Operator op;
    op.setOperator('*');
    op.setParameter(9,8);
    double r;
    op.result(r);
    printf("%f",r);
    return 0;
}
