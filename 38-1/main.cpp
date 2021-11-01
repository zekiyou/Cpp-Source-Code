#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i) {this->i=i;}
    int GetI() const {return i;}
};

bool operator && (const Test& l,const Test& r){
    return l.GetI() && r.GetI();
}

bool operator || (const Test& l,const Test& r){
    return l.GetI() || r.GetI();
}

Test func(Test i){
    cout<<"Test i="<<i.GetI()<<endl;
    return i;
}

int main()
{
    Test t1(1);
    Test t0(0);
    if(func(t0)&&func(t1)){

    //���������صı����Ǻ�������
    //func(t0)&&func(t1) ==> operator && (func(0),func(1))
    //��������ʱ �βζ�����ɼ��� �Ҽ���˳�򲻶�
    //&& || �������ƻ��˶�·�����ԭ������  ��������

        cout<<true<<endl;
    }else
        cout<<false<<endl;

    return 0;
}
