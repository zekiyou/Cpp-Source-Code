#include <iostream>

using namespace std;

class A
{
public:
    A() {}
    virtual void func() {cout<< "A::func" <<endl;}
    virtual ~A() {}
};

class B:public A
{
public:
    void func() {cout<< "B::func" <<endl;}
    B() {}
};

int main()
{

    A* a=new A;

    cout<<a<<endl;

    B* b = dynamic_cast <B*> (a);
    B* b2 = (B*)a;
    a->func();
    b->func();
    b2->func();

    return 0;
}
