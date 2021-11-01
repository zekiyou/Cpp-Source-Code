#include <iostream>

using namespace std;

class A{


public:
    int a;
    void Print(){printf("%p\n",this);}
};


int main()
{
    A a;
    a.a=3;
    A b;
    b.a=5;
    //同一个类的所有对象有独立的成员变量

    printf("a=%p\n",&a);
    a.Print();
    printf("b=%p\n",&b);
    b.Print();
    //同一类的所有对象共享一套类的成员函数
    //类的成员函数有着影藏的this指针参数 指向当前调用的对象 区分是哪个对象调用搞定成员函数


    return 0;
}
