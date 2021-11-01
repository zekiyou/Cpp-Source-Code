#include <iostream>

using namespace std;
template <typename T>
void Swap(T& a, T&b){
    T c=a;
    a=b;
    b=c;
}

template <typename T>
void add(T a, T b){
    cout<<a+b<<endl;
}


int main()
{
    void(*p)(int&,int&)=Swap;
    void(*p2)(string&,string&)=Swap;
    //调用时，编译器根据调用参数，产生具体的函数

    cout<<p<<endl;
    cout<<p2<<endl;


    add(1,1.1);
    //自动推导类型必须严格匹配

    add<int>(1,1.1);
    //显式调用可以进行类型转化
    
    return 0;
}
