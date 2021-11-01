#include <iostream>

using namespace std;

#define c 5
//宏是预处理器处理 没有作用域与类型检查

int main()
{
    const int a=3;
    //const常量是编译器处理 作用域与类型检查
    //C++的const是真正的常量 编译期间使用常量a将直接用表中的值3替换

    printf("a=%d\n",a);
    int* p=(int*)&a;
    //C++为了兼容C语言 依然为常量a分配内存空间 但使用a时不使用a内存空间的值 用初始化时固定常量的值

    *p=5;
    printf("*p=%d\n",*p);
    printf("a=%d\n",a);

    int i=5;

    const int b=i;
    p=(int*)&b;
    *p=5;
    printf("*p=%d\n",*p);
    printf("b=%d\n",b);

    return 0;
}
