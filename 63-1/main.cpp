#include <iostream>
using namespace std;

double divide(double a, double , int* value){
    const double delta = 0.0000000000001;
    if(b<delta && b>-delta){
        *value=0;
        //出异常 value的值为0
        return 0;
    }
    else{
        *value=1;
        return a/b;
    }
    //C语言中简单的 if-else处理异常
}
//如何判断是否出了异常 利用value里的值判断
//C语言本身无异常的概念

int main()
{
    int* p=new int ;
    double r=divide(3,0,p);
    if(p!=0)
        cout<<r<<endl;

    return 0;
}
