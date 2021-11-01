#include "intarray.h"
#include "iostream"
int IntArray::Getlength()
{
    return m_length;
}

bool IntArray::SetArray(int index, int value)
{
    bool ret=(index>=0)||(index<m_length);
    if(ret){
        m_pointer[index]=value;
    }
    return ret;
}

int IntArray::GetArray(int index)
{
    bool ret=(index>=0)||(index<m_length);
    if(ret){
        return m_pointer[index];
    }
    return 0;
}

void IntArray::Free()
{
    delete[] m_pointer;
}

IntArray *IntArray::NewArray(int length)
{
    IntArray* ret=new IntArray(length);

    if(ret&&ret->construct())
        return ret;
    else
        ret=NULL;
    return ret;

}

IntArray::IntArray(int length)
{
    m_length=length;
}

bool IntArray::construct()
{
     bool ret=false;
     m_pointer=new int[m_length];
     if(m_pointer)
         ret=true;
     return ret;
}

IntArray::~IntArray()
{
    void Free();
    printf("~IntArray()\n");
}

IntArray::IntArray(const IntArray& array)
{
    m_length=array.m_length;
    m_pointer=new int[m_length];
    for(int i=0;i<m_length;i++){
        m_pointer[i]=array.m_pointer[i];
    }
}

int IntArray::operator [](int i)
{
    return m_pointer[i];
}
