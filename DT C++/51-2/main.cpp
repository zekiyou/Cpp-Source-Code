#include <iostream>

using namespace std;

class A{
public:
    virtual void print() {cout<<"A"<<endl;}
};

class B:public A{
public:
    virtual void print() {cout<<"B"<<endl;}
};

int main()
{
    B b;
    A* a=new B;
    a->print();

    cout<<sizeof(A)<<endl;
    cout<<sizeof(B)<<endl;
    //多态的实现是通过虚函数表
    //类中会生成一张虚函数表 存放虚函数的地址
    //同时类中会有一个隐藏的 指针 指向该类的虚函数表
    //函数调用时 通过指针寻找该类的虚函数表 来达到多态调用
    return 0;
}
