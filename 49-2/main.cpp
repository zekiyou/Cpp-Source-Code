#include <iostream>

using namespace std;

class Parent
{
public:
    virtual void print() {cout<<"Parent::print()"<<endl;}
    void test() {cout<<"Parent::test()"<<endl;}
};

class Child:public Parent
{
public:
    void print() override {cout<<"Child::print()"<<endl;}
    //当子类重写虚函数时 也自动为虚函数
    //一个函数有虚函数就有虚函数表和虚函数表的指针

    void test() {cout<<"Child::test()"<<endl;}
};

int main()
{
    Child c;

    c.print();

    cout<<sizeof(c)<<endl;

    Parent* p=&c;

    p->print();

    p->test();
    //test没有进虚函数表 通过p指针访问的是Parent test()
    return 0;
}
