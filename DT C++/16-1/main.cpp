#include <iostream>

using namespace std;

struct A
{
    int i;
};
//C++提供专门的class关键字用于定义类
class B
{
    int i;
};

//struct定义类默认成员public
//class定义类默认成员private
int main()
{
    B b;
    A a;
    a.i;
    b.i;
    //error

    return 0;
}
