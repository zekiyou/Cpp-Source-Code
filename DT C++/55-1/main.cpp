#include <iostream>

using namespace std;

class A{
public:
    A() {cout<<"A"<<endl; print();}

    ~A() {cout<<"~A"<<endl;}

};



int main()
{
    A* p=new A;
    //申请空间加初始化
    A* p2=(A*)malloc(sizeof(A));
    //申请空间

    free(p2);
    //仅归还空间
    delete p;
    //deleted调用析构函数摧毁对象加归还空间

    return 0;
}
