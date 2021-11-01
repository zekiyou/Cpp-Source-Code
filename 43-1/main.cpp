#include <iostream>

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
};


//组合是类与类之间的整体与部分关系 一个类的存在必须依赖其他类
//在代码中用 将一个类作为另外一个类的成员变量 来描述这种关系

int main()
{
    Computer c1;
    return 0;
}
