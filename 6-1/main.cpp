#include <iostream>

using namespace std;

#define FUNC(a,b) (a)>(b)?(a):(b)
//宏代码块 无调用开销 无参数检查 无返回类型

__attribute__((always_inlne)) inline int func(int a,int b){
    return (a)>(b)?(a):(b);
}
//inline 内联函数 无调用开销 有参数检查 有返回类型
//现代编译器 可以通过扩展语法 强制内联

int main()
{
    int a=3;
    int b=2;
    int c=FUNC(a++,b);
    //简单的文本替换
    printf("c=%d\n",c);
	
    a=3;
    b=2;
    c=func(a++,b);
    //内联函数具有形参实参 参数检查
    //0x4016cf  <+0x0076>        e8 c4 63 00 00           call   0x407a98 <func(int, int)>
    //通过汇编可见 inline内联函数只是请求内联编译 不一定成功

    printf("c=%d\n",c);

    return 0;
}
