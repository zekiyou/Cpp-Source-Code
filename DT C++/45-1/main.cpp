#include <iostream>

using namespace std;

class A{
private:
    int private_a;
protected:
    int protected_b;
public:
    int public_c;
    void print() {cout<<"Print()"<<endl;}
};

class B:public A{
//public继承保持父类的访问级别

};

class C:protected A{
//protected继承 public->protected 其他不变

};

class D:private A{
//private继承 public，protected,private-> private

};

int main()
{
    B b;
    b.public_c;
    //public继承 public还是pulic 可以在外部访问
    b.print();

    C c;
    c.print();
    //protected继承 public->protected 无法外部访问
    return 0;


    //protected private继承的复杂性远大于实用性 工程中一般只用public继承

}
