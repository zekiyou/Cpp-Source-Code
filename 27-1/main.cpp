#include <iostream>

using namespace std;

class A{
    int i;
    int* p;
    A(int v){i=v;}
    //完成与资源无关的初始化
    bool B(){
        bool ret=true;
        p=new int;
        if(p)
            *p=i;
        else
            ret=false;
        return ret;
    }
    //和系统资源有关的初始化

public:
    static A* newA(int i){
        A* ret=new A(i);
        //一阶构造
        if(!(ret&&ret->B())){
        //二阶构造失败

            delete ret;
            ret = NULL;
            //删除半成品
        }
        return ret;
        //二阶构造成功 返回正确指针
    }
};

int main()
{
    A* a=A::newA(5);

    printf("%p",a);


    return 0;
}
