#include <iostream>

using namespace std;

class Test{
private:
    const int i;
public:
    Test()
    {
        i=10;
        //只读变量不能出现在等号左边 赋值 已经存在的设置值
    }
};


class Test2{
private:
    const int i;
public:
    Test2():i(10)
    //通过初始化列表 初始化 创建i的时候设置值
    {

    }
};

class A
{
public:
    A(int i) {}
};

class B{
    A a1;
    A a2;
public:
    B() {
        a1=A(3);
        a2=A(4);
        //赋值 对已经存在a1 a2设置值
        //A中不存在无参构造函数 故不能创建a1 a2
    }

};

int main()
{

    return 0;
}
