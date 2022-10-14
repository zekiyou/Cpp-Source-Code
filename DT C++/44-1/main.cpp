#include <iostream>

using namespace std;

class A{
private:
    int i = 5;
protected:
    int b;
public:
    int GetI() {return i;}
};

class B:public A{
//B�̳���A�����г�Ա�����ͳ�Ա����
//B��Ҳ�и�int i;int b; int GetI();
//�޸ķ���Ȩ��  B�����޷�ֱ�ӷ��ʴ�A�̳й�����private i��
public:
    int GetB() {return b;}
};

int main()
{
    B b;
    A a;
    cout<<a.GetI()<<endl;
    cout<<b.GetI()<<endl;
    cout<<b.GetB()<<endl;
    return 0;
}
