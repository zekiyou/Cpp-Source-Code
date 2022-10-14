#include <iostream>

using namespace std;

class A{
    int m_a;
public:
    void print() {cout<<"print"<<endl;}
};

class B:public A{
    int m_b;
};

class C:public A{
    int m_c;
};

class D:public B,public C{

};
//多继承的本质就是继承的叠加

int main()
{
    D d;
    B* p1=&d;
    C* p2=&d;
    cout<<p1<<endl;
    cout<<p2<<endl;
    //多继承原罪1 出现 同一对象的指针不同地址


    //多重继承原罪2 菱形继承

    d.B::print();
    //D中有两份不同A 需要指明调用 产生冗余成员
    //需要通过虚继承解决 而虚继承本身并不好用

    return 0;
}
