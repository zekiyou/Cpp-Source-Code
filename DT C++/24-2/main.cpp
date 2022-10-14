#include <iostream>

using namespace std;

class A
{
    int i;
public:
    int j;
    A() {}
    int GetI() const { i=5; return i;}
    //const成员函数不允许在函数体中修改变量值 
    int GetJ() { j=5; return j;}
};
int main()
{
    const A a;
    //const对象是只读对象

    a.j=3;
    //const对象的成员变量是只读的

    a.GetI();
    //const对象只能调用const成员函数

    a.GetJ();

    return 0;
}
