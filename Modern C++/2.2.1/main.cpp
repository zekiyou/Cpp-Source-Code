#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 5;

    if (i == 5)
    {
        cout << i << endl;
    }
    
    //如果要重新定义一个i
    if (int i = 9; i == 9)
    {
        cout << i << endl;
    }
    
    return 0;
}
