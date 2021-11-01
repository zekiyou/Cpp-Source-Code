#include <iostream>

using namespace std;

class A{
    int m_a;
public:
    A(int i){
        cout<<"A(int i)"<<i<<endl;
        m_a=i;
    }
    void print() {cout<<"This is A"<<endl;}
};

class B: virtual public A{
    int m_b;
public:
    B(int i,int v):A(i),m_b(v) {}
};

class C: virtual public A{
    int m_c;
public:
    C(int i,int v):A(i),m_c(v) {}
};

class D:public C,public B{
public:
    D(int i,int b,int j):A(i),C(b,j),B(j,b){}
};


int main()
{
    D d(1,2,3);
    //A的构造函数只被调用一次
    return 0;
}
