#include <iostream>

using namespace std;

int f(int a,int b){
    return a+b;
}

float f(float a,float b){
    return a+b;
}

int main()
{

    cout<<f((int)5.5,(int)3.3)<<endl;

    return 0;
}
