#include <stdio.h>

#ifdef __cplusplus
extern "C"{
#endif
    #include <../9-1/add.h>

    //不同编译方式后，函数的函数名不同
    //C编译函数名只带函数名 C++编译带函数名和参数列表
    //C++使用C函数 就必须制定函数以C方式编译

#ifdef __cplusplus
}
#endif

//用__cplusplus关键字 保证无论是C++还是C都使用C编译

int main()
{
    printf("%d",add(1,2));
    return 0;
}
