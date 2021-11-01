#include <iostream>

using namespace std;

int main()
{

    int* p=new int;
    printf("0x%p\n",p);

    *p=3;
    printf("%d\n",*p);

    delete p;

    p=new int[10]{1,2,3,4,5,6,7,8,9,10};

    for(int i=0;i<10;i++){

        printf("%d\n",p[i]);
    }

     delete[] p;
    //C++的动态内存分配按类型分配  delete与new关键字
	printf("0x%p\n",p);
	// delete 和 free 后 指针不会重空 需要手动 养成习惯 
	p=NULL; 
	
	
    return 0;
}
