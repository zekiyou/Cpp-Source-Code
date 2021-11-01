#include <iostream>
#include <string>
using namespace std;

int main()
{
    string p="12345";
    string s="";


    for(int i=0;i<5;i++){
        s[i]=p[i];
        //面向过程的思想
    }
    //不要C语言混合C++ BUG的来源
    //采用面向对象的方式写代码

    for(int i=0;i<5;i++){
        cout<<s[i]<<endl;
    }

    cout<<s<<endl;
    //s is empty --WHY?
    //s.length=0;

    cout<<s.length()<<endl;

    s=p;
    //面向对象

    cout<<s<<endl;

    cout<<s.length()<<endl;


    return 0;
}
