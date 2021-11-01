#include <iostream>

using namespace std;

template <typename T1, typename T2>
void f(T1 a,T2 b){
    cout<<"void f(T1 a,T2 b)"<<endl;
}

template <typename T>
void f(T a,T b){
    cout<<"void f(T a,T b)"<<endl;
}

template <>
void f<int>(int a,int b){
    cout<<"void f<int>(int a,int b)"<<endl;
}
//函数模板 特化
int main()
{
    f(1,2);

    float a,b;
    int i;
    f(a,b);
    f(i,a);

    return 0;
}
