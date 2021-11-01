#include <iostream>

using namespace std;

void f(int a=3){
    printf("a=%d\n",a);
}
//C++可以在函数声明时 给出参数默认值

void f2(int a, int b=3, int c=4){
    printf("a=%d,b=%d,c=%d",a,b,c);
}
//默认参数必须从右向左提供

void f3(int=0,int=0){
    //占位参数只做占位，无法使用
}
//C++提供占位参数 占位参数配合默认参数达到兼容C中的参数写法

int main()
{


    f();
    //调用时没有提供参数 使用默认值
    f(5);
    //调用时提供参数 使用提供的参数

    f2(3);
    //调用默认参数时 使用了默认参数 则后面的参数都使用默认参数

    f3();//C的写法
    f3(1,2);

    return 0;
}
