#include <iostream>

using namespace std;

class Test{
private:
    int i;
public:
    Test(){printf("Test()\n"),i=8;}
    Test(int v){printf("Test(int v)\n"),i=v;}
    Test(const Test& t2){printf("Test(const Test& t2)");}
    int getI(){return i;}
};
//带参数的构造函数 构造函数的重载
int main()
{
    Test t1;
    //Test()被调用

    Test t2=Test();
    //Test()被调用

    Test t3(1);
    Test t4=1;
    Test t5=Test(1);
    //Test(int v)被调用
    
    t2=Test(3);

    Test ta[3]={5,6,7};

    for(int j=0;j<3;j++)
        printf("%d\n", ta[j].getI());

	Test t6=t3;

    return 0;
}
