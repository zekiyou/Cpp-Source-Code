#include <iostream>

using namespace std;

int main()
{
    //const引用是否生成新的只读变量

    int a=4;
    const int b=a;
    //const引用与变量类型相同，不生成新的变量

    printf("b=%d\n",b);
    a=5;
    printf("b=%d\n",b);


    char c='c';
    const int d=c;
    //const引用与变量类型不相同，生成新的变量


    printf("d=%c\n",d);
    c='a';
    printf("d=%c\n",d);

    return 0;
}
