#ifndef COOP_H
#define COOP_H
typedef struct Parent Parent;
typedef struct Child Child;
typedef struct VirtualTable VirtualTable;

VirtualTable ParentVirtualTable;
VirtualTable ChildVirtualTable;

struct VirtualTable
{
    void (*Virtualp)(Parent*,int);
};

struct Parent
{
    VirtualTable* ptr;
    int m_i;
    int m_j;
};
//用C语言实现面向对象
//1.class的成员变量在内存与struct一致

Parent Parent_Creat(int i,int j);
int Parent_GetI(Parent* pthis);
int Parent_GetJ(Parent* pthis);
void Parent_Add(Parent* pthis,int value);
void Virtual_Parent_Add(Parent* pthis,int value);
//2.手动调用成员函数需要的this指针

//3.实现继承 继承本质就是父类成员叠加新子类成员
struct Child
{
    Parent p;
    int m_k;
};

Child Child_Creat(int i,int j,int k);
void Child_Add(Child* pthis,int value);
int Child_GetK(Child* pthis);
void Virtual_Child_Add(Child* pthis,int value);
//3.实现多态 虚函数列表与类中指向虚函数表的指针配合

#endif // COOP_H
