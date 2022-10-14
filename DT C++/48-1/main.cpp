#include <iostream>

using namespace std;

class A{
public:
    int a_i;
    void print(){
        cout<<"I'm A class"<<endl;
    }

};


class B:public A{
public:
    int b_i;
    void print(){
        cout<<"I'm B class"<<endl;
    }

};

void print(A& a){
    a.print();
}
//根据父类指针可以指向子类
//父类引用可以引用子类的原则
//设计可以子类父类共用的函数
//(函数重写需要虚函数支持才有意义)

int main()
{
    B b;
    A a=b;
    //子类对象赋值兼容 可以直接当父类对象使用

    a.print();
    //子类退化为父类对象  还原父类的成员

    A& a2=b;
    //子类退化为父类对象  还原父类的成员

    a2.print();

    print(b);

    return 0;
}
