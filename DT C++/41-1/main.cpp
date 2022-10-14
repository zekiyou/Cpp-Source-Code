#include <iostream>

using namespace std;

class Test{
    int i;
public:
     explicit Test(int i){
        cout<<"Test构造"<<endl;
        this->i=i;
    }
    //explicit杜绝隐式类型转化 只能手动调用

    Test& operator = (const Test& obj){
        i=obj.i;
        cout<<"赋值被调用"<<endl;
    }

};

int main()
{
    Test i(6);
    i=7;
    //编译器查找转换构造函数 隐式类型转换
    //i=(Test)7;
    return 0;
}
