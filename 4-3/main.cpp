
#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int& b=a;
    //C++的引用可以看做已经定义的变量的别名
    b=5;
    //操作b就是操作a
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",&b);
    //b,a是同一段内存空间的别名

    int& c;
    //引用声明的同时必须用类型相同的变量初始化

    return 0;
}
