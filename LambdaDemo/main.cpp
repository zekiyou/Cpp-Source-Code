#include <iostream>

using namespace std;

int func2(int i)
{
   i += 2;
   return i+4;
}



int main()
{
    cout << "Hello World!" << endl;

    int k = 0;

    auto func1 = [k](int i) {i += 2; return i+4; };

    cout << func1(5) <<endl;
    cout << func2(5) <<endl;


    return 0;
}
