#include <iostream>

using namespace std;

struct Student
{
    char* name;
    int id;
};

f(){

    cout<<"f() test"<<endl;

    return 1;
}

int main()
{
    Student s1;
    //C++的struct可以创建新类型，等于C语言typedef+struct
    cout << "Hello World!" << endl;

    int a;
    //C++的变量可以任意位置定义
    //C语言变量必须在域开始时定义

    f(1,2);
    //C++不写参数就是不接受参数等于f(void)
    //C语言不写参数等于接受任意参数

    return 0;
}
