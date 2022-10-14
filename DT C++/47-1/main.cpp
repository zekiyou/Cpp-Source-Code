#include <iostream>

using namespace std;

class A{
public:
    int i;
    int b;
    void f(int x){
        cout<<i+x<<endl;
    }
};

class B:public A{
public:
    using A::f;
    int i;
    void f(){
        cout<<i<<endl;
    }

    //�������븸��ͬ���ĳ�Ա���ڲ�ͬ������
    //�����ͬ�������� ��Ҫͨ��������ֱ������
};

int main()
{
    B b;
    b.i=100;
    b.A::i=1000;
    cout<<&b.i<<"="<<b.i<<endl;
    cout<<&b.A::i<<"="<<b.A::i<<endl;

    b.f(5);
    
    //��ͬ������ ����������
    return 0;
}
