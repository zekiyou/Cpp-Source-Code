#include "operator.h"

void Operator::setParameter(double a, double b){
    mp1=a;
    mp2=b;
}

bool Operator::setOperator(char op){
    bool ret=false;
    if((op=='+')||(op=='/')||(op=='*')||(op=='-'))
    {
        ret=true;
        mop=op;
    }
    return ret;
}

bool Operator::result(double &r){

    bool ret=false;
    switch (mop) {
    case '+':
        r=mp1+mp2;
        ret=true;
        break;
    case '-':
        r=mp1-mp2;
        ret=true;
        break;
    case '*':
        r=mp1*mp2;
        ret=true;
        break;
    case '/':
        if(mp2==0)
            break;
        else{
            r=mp1*mp2;
            ret=true;
            break;
        }
    default:
        break;
    }
    return ret;
}
//.cpp文件完成类的实现
