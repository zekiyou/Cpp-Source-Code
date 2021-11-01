#include <iostream>
#include <string>
using namespace std;

class CPU{
public:
    CPU() {cout<<"CPU被创建"<<endl;}
    ~CPU() {cout<<"CPU被销毁"<<endl;}
};

class Computer{
  CPU m_CPU;
public:
  Computer() {cout<<"Computer被创建"<<endl;}
  ~Computer() {cout<<"Computer被销毁"<<endl;}
  void TrunOn() {cout<<"Trun On"<<endl;}
};


class MacBook:public Computer{
    string system="MacOS";
public:
    void SetSystem(string s){system=s;}
    string ShowSystem() {return system;}
};
//子类继承了父类的所有属性和行为
//子类是一个特殊的父类
//子类可以添加父类中没有的方法与属性


int main()
{
    MacBook mb1;
    cout<<mb1.ShowSystem()<<endl;
    mb1.TrunOn();

    Computer c1=mb1;
    //子类可以直接初始化父类
    c1.TrunOn();

    return 0;
}
