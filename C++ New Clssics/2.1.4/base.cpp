#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //合法的二进制
    int a = 0b101;  //换算成十进制为 5
    int b = -0b110010;  //换算成十进制为 -50
    int c = 0B100001;  //换算成十进制为 33
    cout << a << " " << b  << " " << c << endl;

    //合法的八进制数
    a = 015;  //换算成十进制为 13
    b = -0101;  //换算成十进制为 -65
    c = 0177777;  //换算成十进制为 65535
    cout << a << " " << b  << " " << c << endl;

    //合法的十六进制
    a = 0X2A;  //换算成十进制为 42
    b = -0XA0;  //换算成十进制为 -160
    c = 0xffff;  //换算成十进制为 65535
    cout << a << " " << b  << " " << c << endl;
    
    return 0;
}
