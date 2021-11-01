#include <iostream>

using namespace std;

struct test{
  char& c;
};


int main()
{

    int a=8;
    int& b=a;

    char p=4;
    char&c =p;

    printf("sizeof(test)=%d\n",sizeof(test));
    //引用也占用内存大小  因为引用的本质是通过指针实现的

    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(p));

    printf("0x%p\n",&b);
    printf("0x%p\n",&a);
    //站在使用的角度，引用是变量的别名，C++隐藏了引用存储空间的细节

    return 0;
}
