#include "coop.h"

Parent Parent_Creat(int i,int j){
    Parent ret;
    ret.m_i=i;
    ret.m_j=j;
    ret.ptr=&ParentVirtualTable;
    return ret;
}

int Parent_GetI(Parent* pthis){
    return pthis->m_i;
}

int Parent_GetJ(Parent* pthis){
    return pthis->m_j;
}

void Parent_Add(Parent* pthis,int value){
     pthis->ptr->Virtualp(pthis,value);
}
//通过虚函数表的指针
//父类运行  调用父类虚函数表里的函数
//子类运行  调用子类虚函数表里的函数


void Virtual_Parent_Add(Parent* pthis,int value){
    pthis->m_i+=value;
    pthis->m_j+=value;
}
//虚函数 Parent的Add

Child Child_Creat(int i,int j,int k){
    Child ret;
    ret.p.m_i=i;
    ret.p.m_j=j;
    ret.m_k=k;
    ret.p.ptr=&ChildVirtualTable;
    return ret;
}

void Child_Add(Child* pthis,int value){
    pthis->p.ptr->Virtualp(pthis,value);
}

void Virtual_Child_Add(Child* pthis,int value){
    pthis->p.m_i+=value;
    pthis->p.m_j+=value;
    pthis->m_k+=value;
}
//虚函数 Child的Add

int Child_GetK(Child* pthis){
    return pthis->m_k;
}


