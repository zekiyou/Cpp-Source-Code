#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i) {this->i=i;}
    operator int (){
        return i;
    }

    int toInt(){
        return i;
    }
    //工程中用 Type toType()的普通函数完成功能
    //避免隐式类型转化
};

int main()
{
    Test t0(0);
    int i=t0;
    //int i=t0.operator int
    //隐式类型转换 Test->int

    t0.toInt();
    //实际使用
    return 0;
}
