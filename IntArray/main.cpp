#include <iostream>
#include "intarray.h"
using namespace std;

int main()
{
    IntArray* array=IntArray::NewArray(6);
    //二结构造模式保证没有半成品对象的产出

    for(int i=0;i<array->Getlength();i++){
        array->SetArray(i,i);
    }

    for(int i=0;i<array->Getlength();i++){
        printf("%d\n",array->GetArray(i));
    }

    IntArray array2=*array;
    //调用编译器默认的拷贝构造函数是浅拷贝
    //手动编写深拷贝

    for(int i=0;i<array2.Getlength();i++){
        printf("%d\n",array2.GetArray(i));
    }
    //简单的值拷贝使得array2的指针和array的指针指向同一块栈空间

    cout<<array2[3]<<endl;


    delete array;

    return 0;
}
