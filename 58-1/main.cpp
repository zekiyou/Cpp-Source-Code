#include <iostream>
using namespace std;
#include "opeator.h"
int main()
{
    Opeator<int> op1(1,2);
    cout<<op1.add()<<endl;
    Opeator<double> op2(1.5,2.55);
    cout<<op2.add()<<endl;
    Opeator<string> op3("Always","Online");
    cout<<op3.add()<<endl;
    //类模板需要显示指明类型
    return 0;
}
