#include <iostream>

using namespace std;

int main()
{
    int a=3;
    int b=2;
    (a>b?a:b)=5;

    //C++对三目运算符的升级，返回a变量 可以作为左值使用

    printf("%d",a);

    return 0;
}
