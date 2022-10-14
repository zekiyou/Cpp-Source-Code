#include <iostream>

using namespace std;

class Test{
public:
    int* p;
    Test(int v){p=new int;*p=v;}
};


class Test2{
public:
    int* p;
    Test2(int v){p=new int;*p=v;}
    Test2(const Test2& t){p=new int;*p=*(t.p);}
};

int main()
{
    Test t1=Test(5);
    Test t2=t1;
    printf("%p\n",t1.p);
    printf("%p\n",t2.p);
    //编译器自动提供的拷贝构造函数是浅拷贝
    Test2 t21=Test2(5);
    Test2 t22=t21;
    printf("%p\n",t21.p);
    printf("%p\n",t22.p);
    //手动编写拷贝构造函数完成深拷贝


    //Tips: 对正在创建的对象进行初始值设置————初始化才调用构造函数

    Test t3=t1;
    //调用拷贝构造函数进行初始化

    t3=t1;
    //调用赋值重载函数

    return 0;
}
