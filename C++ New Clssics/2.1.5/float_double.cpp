#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    float f = 1111111.111;
    double d = 1111111.111;
    printf("%f\n", f);
    printf("%f\n", d);
    
    f = 123456789.1234;
    d = 123456789.1234;
    printf("%.20f\n", f);
    printf("%.20f\n", d);
    
    return 0;
}
