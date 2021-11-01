#include <iostream>

using namespace std;

template <typename T1 , typename T2>
class A
{
public:
    void add(T1 a, T2 b){
        cout<<"void add(T1 a, T2 b)"<<endl;
    }
};
//重载类模板==>特化

template <typename T>
class A <T , T>
{
public:
    void add(T a, T b){
        cout<<"void add(T a, T b)"<<endl;
    }
};
//部分特化

template < >
class A <int , int>
{
public:
    void add(int a, int b){
        cout<<"void add(int a, int b)"<<endl;
    }
};
//完全特化

int main()
{
    A<int, float> a;
    A<float, float> b;
    A<int, int> c;
    //根据指定信息 选择模板类
    a.add(3,6.0);
    b.add(5.0,6.0);
    c.add(1,5);

    return 0;
}
