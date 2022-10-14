#include <iostream>

using namespace std;

void f(int a,int b){
    cout<<"f(int a,int b)"<<endl;
 }

template <typename T>
void f(T a, T b){
    cout<<"f(T a, T b)"<<endl;
}
//模板遇上重载

int main()
{
    int a=5;
    int b=6;

    f(a,b);
    //优先考虑普通函数

    f<>(a,b);
    //使用<>强制使用函数模板调用

    return 0;
}
