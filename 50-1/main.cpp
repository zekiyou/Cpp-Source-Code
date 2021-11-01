#include <iostream>

using namespace std;

class cTest{
    int i;
    char c;
    double b;
    //class的本质是特殊的strcut
    //在内存中所有成员变量依次排列 与 strcut相同内存对齐
public:
    cTest(int vi,char vc, double vb):i(vi),c(vc),b(vb) {cout<<this<<endl;}
    void print() {
        cout<<"i="<<i<<endl;
        cout<<"c="<<c<<endl;
        cout<<"b="<<b<<endl;
        cout<<this<<endl;
    }
    //成员函数位于代码段 所有对象共享
    //在调用时 通过隐藏的this指针传递成员变量的地址
    //成员函数通过成员变量的地址访问数据
};

struct sTest
{
   int i;
   char c;
   double b;
};


int main()
{
    cout<<sizeof(sTest)<<endl;
    cout<<sizeof(cTest)<<endl;
    //类的成员变量和结构体排列在内存中一致

    cTest c(1,'c',3.0);

    c.print();

    sTest* p = reinterpret_cast<sTest*>(&c);
    //通过结构体指针操控内存 可以直接访问类的成员变量
    //类的成员变量在内存中和结构体排布一致

    p->b=5.0;
    p->i=100;
    p->c='a';

    c.print();

    cout<<"&c="<<&c<<endl;


    return 0;

}
