 #include <iostream>

using namespace std;

class A{
public:
    static void f(int i){printf("static void f()");}
    void f(){printf("A::f()");}
    //static成员函数和成员函数在同一作用域可以重载
};

void f(){printf("f()");}

//函数重载发生在同一作用域
//全局函数f和A的成员函数f不构成重载

int main()
{
    f();
    A::f(5); //编译器可以通过类名和对象名调用对应的函数 
    A a;
    a.f(6);
    a.f();
    return 0;
}
