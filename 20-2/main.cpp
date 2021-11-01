#include <iostream>

using namespace std;

class A{
public:
    A() {cout<<"A被创建"<<endl;}
    A(const A& a) {cout<<"A的拷贝构造"<<endl;}
    A& operator = (const A& a) {cout<<"A的赋值=重载"<<endl;}
};

class B{
    A a;
public:
    B(A& obj):a(obj) {}
};


class C{
    A a;
public:
    C(A& obj) {a=obj;}
};
//C比B多一个 a调用默认构造创建的过程

int main()
{
    A a;

    cout<<endl;

    B b(a);

    cout<<endl;

    C c(a);

    return 0;
}
