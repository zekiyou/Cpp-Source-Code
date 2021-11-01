#include <iostream>

using namespace std;

class A{
    int i;
public:
     A(int i) {
        cout<<"转化构造"<<endl;
        this->i=i;
    }
    //转化构造函数 没写编译器提供空的构造函数

    A(const A& obj){
        cout<<"拷贝构造"<<endl;
        i=obj.i;
    }
    //拷贝构造函数 没写编译器提供默认

    A& operator = (const A& obj){
        cout<<"=的重载"<<endl;
        i=obj.i;
        return *this;
    }
    // =的重载  没写编译器提供默认

};

int main()
{
    A t0(3);
    //显式调用 成功

    A t1=3;
    //隐式类型转化 t=(A)3;
    //受到explicit的控制 只能手动调用

    A t2=A(7);
    //显式类型转化
    //编译器的优化 避免临时对象
    //所以这里没有设想的 拷贝构造的调用

    t0=t1;
    //=的重载

    A t3=t1;
    //拷贝构造函数

    return 0;
}
