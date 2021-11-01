#include <iostream>

using namespace std;

class A{
public:
    virtual void print() {cout<<"A::print();"<<endl;}
    void print(int i) {cout<<"print(int i)"<<endl;}
    void print(int i, int v) {cout<<"print(int i, int v)"<<endl;}
};

class B:public A{
public:
    void print() {cout<<"B::print()"<<endl;}
};


void print(A* a){
    a->print();
}

int main()
{
    A* b=new B;
    A* a=new A;

    B f;
    A a2 = f;
    a2.print();
    cout << sizeof(f) << endl;
    cout << sizeof(a2) << endl;
    cout << sizeof(a) << endl;
    print(a);
    print(b);

    //c++虚函数：当基类指针(引用)调用时 使得函数重写有意义 根据实际对象类型决定函数调用
    //编译的时候无法知道a具体指向什么类型 只有一个地址 不知道调用哪个函数 只知道要调用 print()
    //而到运行的时候才能知道指向的类型 属于动态联编


    a->print(3);
    a->print(3,5);
    //编译时候 要调用print(int i) 和 print(int i,int v) 确定了调用的函数
    //属于静态联编

    return 0;
}
