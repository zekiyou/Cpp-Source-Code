#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    bool b=true;
    //bool类型是C++的新类型 只占用1 byte 可取的值只有true和false
    //true在编译器内部值为1  false值为0

    printf("sizeof(b)=%d,b=%d\n",sizeof(b),b);

    bool c=10;
    //编译器内部true值为1，flase为0
    //编译器会将0值转化为false，非0转化为true

    printf("c=%d",c);

    return 0;
}
