#include <iostream>

using namespace std;

class Object{
    string str;
public:
    Object(string s){
        cout<<"Object()被调用"<<endl;
        str=s;
    }
    ~Object(){
        cout<<"~Object()被调用"<<endl;
    }
};

class A{
    int i;
public:
    A(int i){
        cout<<"A()被调用"<<endl;
        this->i=i;
    }
    ~A(){
        cout<<"~A()被调用"<<endl;
    }
};

class B:public Object{
    A a;
public:
    B(int i,string s):a(i),Object(s){
    //用初始化列表 对类成员变量初始化 显式调用父类的构造函数对继承的成员变量初始化

        cout<<"B(int i,string s)被调用"<<endl;
    }
    ~B() {cout<<"~B()被调用"<<endl;}
};



int main()
{
    B b(5,"Hello");
    //构造调用顺序 先父母 后客人 再自己
    //析构顺序与构造相反
    return 0;
}
