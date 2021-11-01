#include <iostream>

using namespace std;


class A{
public:
    static int i;

};

int A::i=1;

int main()
{
    A a;
    A b;


    printf("%d",a.i);
    printf("%d",b.i);
    printf("%d",A::i);


    return 0;
}
