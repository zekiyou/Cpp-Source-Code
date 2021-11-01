#include <iostream>
#include "singalton.h"
using namespace std;

class A
{
    friend singalton<A>;
    A() {}
public:
    void print() {cout<<this<<endl;}
};

//A实现单例类模板 变成单例模式

int main()
{
    A* p=singalton<A>::GetInstance();
    A* p2=singalton<A>::GetInstance();

    p->print();
    p2->print();

    return 0;
}
