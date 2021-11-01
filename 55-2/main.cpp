#include <iostream>

using namespace std;

class Parent
{
public:
    Parent() {cout<<"Parent被构造"<<endl;}
    virtual void func() {cout<<" Parent::func()"<<endl;}
    void print() {func();}
    virtual ~Parent() {cout<<"~Parent被析构"<<endl;}
    //析构函数声明为虚函数 完成多态
};

class Child : public Parent
{
public:
    Child() {cout<<"Child被构造"<<endl;}
    void func() {cout<<"Child::func()"<<endl;}   
    ~Child() {cout<<"~Child被析构"<<endl;}
};

int main()
{
    Parent* p = new Child;
    p->print();
    delete p;
    //对于指向Child的指针 delete应该调用Chld的析构函数
    //析构函数应该被声明为虚函数
    return 0;
}
