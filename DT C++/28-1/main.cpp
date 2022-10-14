#include <iostream>

using namespace std;

class A{
    int i;
public:
    A(int v){i=v;}
    friend class B;
    friend void f(A& a);
};

class B{
    A a=5;
    int b=a.i;
    //友元B直接访问a的private变量
public:
    void f(int v){a.i=v;}

};

void f(A& a){
    printf("%d",a.i);
}
//友元不是类的一部分 声明f是A的友元

int main()
{
    A a=100;
    f(a);
    //友元不收类中访问级别控制，直接访问类中所有成员

    B b;
    b.f(200);

    return 0;
}
