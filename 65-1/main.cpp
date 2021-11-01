#include <iostream>

using namespace std;
void func(int i){
    if(i<0)
        throw 0;
    if(i==0)
        throw -1;
    if(i>0)
        throw 1;
}
//第三方库func 函数抛出int型的异常
//0 是参数异常
//1 是运行异常
//-1 是超时异常


void myfunc(int i){
    try{
        func(i);
    }catch(int i){
        if(i==0)
            throw "invalid error";
        if(i==-1)
            throw "timeout error";

        if(i==1)
            throw "runout error";

    }

}
//利用catch重新抛异常 达到统一异常类型
int main()
{

    try{
        myfunc(1);
    }catch(const char* i){
        cout<<i<<endl;
    }

    return 0;
}
