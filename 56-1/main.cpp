#include <iostream>
using namespace std;

template <typename T>
//告诉编译器 T泛指一个数据类型
void Swap(T& a, T&b){
    T c=a;
    a=b;
    b=c;
}

template <typename T>
void print(T a[],int len){
    for(int i=0;i<len;i++){
        cout<<a[i]<<endl;
    }
}

int main()
{
    int a=5;
    int b=3;

    string s1="THIS is my life";
    string s2="RPG";
    Swap(s1,s2);
    //自动推导
    Swap<int>(a,b);
    //手动调用

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<b<<endl;
    cout<<a<<endl;

    string s[3]={"Hello","C++","World"};
    print(s,3);

    return 0;
}
