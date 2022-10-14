#include <iostream>

using namespace std;

class A
{
public:
    A() {printf("A()\n");}
    ~A() {printf("~A()\n");}
};

class B{
private:
    A a1;
    A a2;
public:
    B() {printf("B()\n");}
    ~B() {printf("~B()\n");}
};

B b1;
//多个对象的构造顺序 b1先b2构造
//析构的顺序相反  b2先于b1析构

int main()
{

    B b2;
    //对象创建时的构造函数调用顺序:
    //1.成员对象 a1 a2的构造函数 2.调用自身的构造函数

    //析构的顺序和构造的顺序相反 最后构造的最先析构
    return 0;
}
