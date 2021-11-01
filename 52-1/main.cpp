#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    //纯虚函数 area() 声明原型 不实现
};
//抽象类Shape 只能继承 不能创建对象

class Rect:public Shape{
    int ma;
    int mb;
public:
    Rect(int ma,int mb){
        this->ma=ma;
        this->mb=mb;
    }
    double area(){
        return ma*mb/2;
    }
};

class Channel{
public:
    virtual boool open()=0;
    virtual void  close()=0;
    virtual boool send(char* buf,int len)=0;
    virtual int  receive(char* buf,int len)=0;
};
//接口是一组函数的原型
//C++中用特殊的抽象类实现

class Circle:public Shape{
    int r;
public:
    Circle(int i){
        i=r;
    }
    double area(){
        return 3.14*r*r;
    }
};

double erea(Shape *p){
    p->area();
}
//实现多态  根据不同对象调用不同的aear()函数

int main()
{
    Rect r(3,4);
    Circle c(10);
    cout<<erea(&r)<<endl;
    cout<<erea(&c)<<endl;
    return 0;
}
