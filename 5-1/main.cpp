#include <iostream>

using namespace std;

int main()
{
    int a=5;

    const int& b=a;
    //const引用 b引用拥有只读属性

    const int& c=5;
    //常量不能赋值给普通引用 但可以初始化常量引用
    //C++编译为常量分配内存空间  相当于生成了一个只读变量c值为5

    a=7;
	printf("%d\n",b);

    printf("%d\n",c);
	
    printf("%p\n",&c);
	
    double* p=(double*)&c;
	*p=3;

    printf("%d\n",c);
	printf("%d\n",*p);

    constexpr int d = 3;
    int& dd = (int&)d;
    dd = 5;

    cout << d << dd << endl;

    if (dd==d)
        cout << "dd=d" <<endl;

    return 0;
}
