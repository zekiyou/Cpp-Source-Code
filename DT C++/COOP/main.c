#include <stdio.h>
#include "coop.h"

void func(void* p,int v){
    Parent_Add(p,v);
}
//实现多态，当用使用父类指针时
//根据指向的子类或者父类调用不同Add函数



int main()
{
    ParentVirtualTable.Virtualp=Virtual_Parent_Add;
    ChildVirtualTable.Virtualp=Virtual_Child_Add;

    Parent p=Parent_Creat(1,2);
    printf("%d\n",Parent_GetI(&p));
    printf("%d\n",Parent_GetJ(&p));
    Parent_Add(&p,10);
    printf("%d\n",Parent_GetI(&p));
    printf("%d\n",Parent_GetJ(&p));

    Child c=Child_Creat(1,2,3);
    printf("%d\n",Parent_GetI(&c));
    printf("%d\n",Parent_GetJ(&c));
    //调用父类的成员函数
    printf("%d\n",Child_GetK(&c));
    Child_Add(&c,10);
    //调用子类新成员函数
    printf("%d\n",Parent_GetI(&c));
    printf("%d\n",Parent_GetJ(&c));
    printf("%d\n",Child_GetK(&c));

    func(&p,10);
    printf("%d\n",Parent_GetI(&p));
    printf("%d\n",Parent_GetJ(&p));

    func(&c,10);
    printf("%d\n",Parent_GetI(&c));
    printf("%d\n",Parent_GetJ(&c));
    printf("%d\n",Child_GetK(&c));


    return 0;
}
