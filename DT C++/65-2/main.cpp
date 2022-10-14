#include <iostream>

using namespace std;

class my_Exception{
    int m_id;
    string m_desc;
public:
    my_Exception(int id, string desc){
        m_id=id;
        m_desc=desc;
    }
    int id(){
        return m_id;
    }

    string desc(){
        return m_desc;
    }
};
void func(int i){
    if(i<0)
        throw 0;
    if(i==0)
        throw -1;
    if(i>0)
        throw 1;
}
//第三方库func 函数抛出int型的异常
//0 是参数异常
//1 是运行异常
//-1 是超时异常


void myfunc(int i){
    try{
        func(i);
    }catch(int i){
        if(i==0)
            throw my_Exception(0,"invalid error");
        if(i==-1)
            throw my_Exception(-1,"timeout error");

        if(i==1)
            throw my_Exception(0,"runout error");

    }
}
//利用catch重新抛类异常 达到统一异常类型

int main()
{
    try{
        myfunc(0);
    }catch(my_Exception& e)
    {
        cout<<e.desc()<<endl;
        cout<<e.id()<<endl;
    }
    return 0;
}
