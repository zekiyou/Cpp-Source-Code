#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i){this->i=i;}
    int GetI(){return i;}
};

Test& operator , (const Test& l, const Test& r) {
    return const_cast<Test&>(r);
}

Test func(Test i){

    cout<<"Test i="<<i.GetI()<<endl;

    return i;
}

int main()
{
    Test t0(0);
    Test t1(1);
    int i=(func(0).GetI(),func(1).GetI());
    //操作符重载的本质是函数调用
    //fun(0),fun(1) ==> operator , (func(0),func(1))
    //函数调用时 形参都得完成计算 且计算顺序不定
    //, 的重载破坏了从左到右计算的原生语义  不要重载

    cout<<i<<endl;

    return 0;
}
