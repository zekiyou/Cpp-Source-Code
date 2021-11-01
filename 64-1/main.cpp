#include <iostream>
using namespace std;

double divide(double a, double b){
    const double delta = 0.0000000000001;
    if(b<delta && b>-delta){

        throw 0;
    }
    else{

        return a/b;
    }
}

void f(){
    try{
        throw "error";
    }
    catch(int i){
        cout<<"error int"<<endl;
    }
}

int main()
{

    try{
        double b=divide(1,0);
        //try中语句抛出的异常由catch匹配处理
    }catch(short s){
        cout<<"error short"<<endl;
    }catch(int i){
        cout<<"error int "<<endl;
    }catch(...){
        cout<<"error ..."<<endl;
    }//...用以处理任意异常


    try{
        f();
        //异常的传播  会顺着调用栈顺序传播 直到被处理
    }catch(...){
         cout<<"error ..."<<endl;
    }


    return 0;
}
