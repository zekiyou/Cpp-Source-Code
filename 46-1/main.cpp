#include <iostream>

using namespace std;

class A{
protected:
    string m_s;
public:
    A() {
      m_s="";
      cout<<"A()被调用"<<endl;
    }

    A(string s){
      m_s=s;
      cout<<"A(String s)被调用"<<endl;
    }

};

class B:public A{
public:
    B() {cout <<"B()被调用"<<endl;}
    B(string s): A(s) {cout<<"B(string s)被调用"<<endl;}
    //通过初始化列表来对父类带参数的构造函数调用
    string Gets() {return m_s;}
};

int main()
{
    B b;
    //自动调用父类无参数或者默认值的构造函数 对继承来的成员初始化
    B b2("ss");
    //调用父类有参数的构造函数 对继承来的成员初始化
    cout<<b.Gets()<<endl;
    cout<<b2.Gets()<<endl;
    return 0;
}
