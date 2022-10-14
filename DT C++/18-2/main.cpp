#include <iostream>

using namespace std;

class Test{
private:
    int i;
public:
    
	Test(int v){
        i=v;
        printf("Test(int v)\n");
    }

    Test(){
        i=0;
        printf("Test()\n");
    }
    
    Test& operator=(const Test& other){
    	printf("Test& operator=(const Test& other)\n");
	} 
	
    void PrintI(){
        printf("i=%d\n",i);
    }
};

int main()
{
    Test t1;
    //创建对象自动调用构造函数
    t1=Test(5);
    //后面还能手动调用构造函数
    
    return 0;
}
