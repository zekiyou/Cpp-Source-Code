#include <iostream>
#include <vector>
using namespace std;

class Foo {
public:
    int value_a;
    int value_b;
    Foo(int a, int b) : value_a(a), value_b(b) {}
};

class Foo_old {
public:
    int value_a;
    int value_b;
};



int main(int argc, char const *argv[])
{
    //before C++ 11
    //对于例如普通数组、 POD （Plain Old Data，即没有构造、析构和虚函数的类或结构体） 类型都可以使用 {} 进行初始化
    int arr[3] = {1, 2, 3};
    std::vector<int> vec = {1, 2, 3, 4, 5};
    Foo_old foo_old{1,2};

    cout << foo_old.value_a << " " << foo_old.value_b << endl;

    //而对于类对象的初始化，要么需要通过拷贝构造、要么就需要使用 () 进行。
    Foo foo(3, 4);
    cout << foo.value_a << " " << foo.value_b << endl;
    
    return 0;
}
