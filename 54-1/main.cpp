#include <iostream>

using namespace std;

class A{
public:
   virtual  void print() {cout<<"A::print()"<<endl;}
};

class B{
public:
    virtual void print() {cout<<"B::print()"<<endl;}
};

class C:public A,public B{

};

int main()
{
    C c;

    //c�����������麯���� �����麯��ָ��vrtp1 vrtp2

    A* a=&c;
    B* b=&c;
    cout<<a<<endl;
    cout<<b<<endl;
    //ָ��ͬһ�������ָ��ֵ��ͬ
    B* b2=dynamic_cast<B*>(a);
    a->print();
    b2->print();
    B* b3=(B*)a;
    b3->print();
    //ͨ��dynamic_cast��ǿ������ת�� ָ��ͳһλ�� b
    cout<<b2<<endl;
    return 0;
}
