#include <iostream>

using namespace std;

int main()
{
    int v=0x123456;
    int* p=(int*)v;
    //粗暴随意的C语言强制类型转换 编译器很难判断正确性

    //C++提供各种类型的强制类型转换满足需要 对应各种情况 有规则方便检查

    //static_cast 用于基本数据类型之间的转换,不能进行指针之间的转换
    char c='a';
    int i=static_cast<int>(c);

    //reinterpret_cast用于指针与指针之间的强制类型转换，用于整数与指针之间的强制类型转化

    char*cp=&c;
    p=&i;

    p=reinterpret_cast<int*>(cp);
    cp=reinterpret_cast<char*>(0);

    //const_cast用于去除变量的只读属性 强制类型转换给指针或者引用
    const int a=3;

    int* p3=const_cast<int*>(&a);

    *p3=5;
 
    printf("a=%d",a);
    printf("*p3=%d",*p3);


    return 0;
}
