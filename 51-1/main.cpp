#include <iostream>

using namespace std;

class A{
    int m_i;
    int m_j;
};

class B:public A{
    int m_k;
};
//继承中，子类成员变量是由父类成员变量叠加得到
//父类在前 子类在后 内存中排列

struct Test
{
    int m_i;
    int m_j;
    int m_k;
};

int main()
{
    B b;
    Test* p=reinterpret_cast<Test*>(&p);

    p->m_i=10;
    p->m_j=100;
    p->m_j=1000;
    //通过内存访问

    return 0;
}
