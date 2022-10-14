#include <iostream>

#include "add.h"
// C++直接调用C语言函数 函数编译方式不同 调用失败

using namespace std;

extern "C"{

    #include "add.h"
    //不同编译方式后，函数的函数名不同
    //C编译函数名只带函数名 C++编译带函数名和参数列表
    //C++使用C函数 就必须指定函数以C方式编译

}


int main()
{
    int c=add(1,2);
    printf("c=%d",c);
    return 0;
}
