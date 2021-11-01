#include <iostream>

using namespace std;

int main()
{
    //const修饰的 什么时候是变量 什么时候是常量

    int* p;

    const int a=3;
    p=(int*)&a;
    *p=5;
    printf("a=%d\n",a);
    printf("*p=%d\n",*p);
    //用字面量初始化 编译期间能直接确定值的是常量 进入符号表

    int b=3;
    const int c=b;
    p=(int*)&c;
    *p=5;
    printf("c=%d\n",c);
    printf("*p=%d\n",*p);
    //用变量初始化 编译期间不能确定值的是普通的只读变量

    volatile const int d=5;
    //volatile修饰的const常量不会进入符号表
    p=(int*)&d;
    *p=5;
    printf("d=%d\n",d);
    printf("*p=%d\n",*p);


    return 0;
}
