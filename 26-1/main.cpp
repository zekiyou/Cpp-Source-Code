#include <iostream>

using namespace std;

class A{

public:
    static void f2(){printf("f2()\n");}
    static void f(){
        printf("f()\n");
        f2();
    }

};

int main()
{
    A::f();
    return 0;
}
