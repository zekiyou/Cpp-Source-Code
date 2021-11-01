#include <iostream>

using namespace std;

class A{
public:
    A(){printf("A()\n");}
    ~A(){printf("~A()\n");}
    //与构造函数相反 函数销毁前自动调用析构函数
};

int main()
{
    A a;
	
    A* p=new A;

    delete p;

    return 0;
}
