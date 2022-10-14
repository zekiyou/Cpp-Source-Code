#include <iostream>

using namespace std;
class A{
public:
    A(){printf("A()\n");}
    ~A(){printf("~A()\n");}
    A(const A& t){printf("A(const A& t)\n");}

};
int main()
{
    A();
    //直接调用析构函数 得到一个无名的临时对象
    //临时对象的作用域和声明周期只在12行一条语句

    printf("end");

    A a=A();
    //现代C++编译器也优化避开临时对象 避免性能下降

    return 0;
}
