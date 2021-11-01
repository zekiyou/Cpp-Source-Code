#include <iostream>
using namespace std;

int f(int i) throw(int){
    throw 1;
}
//异常说明 程序会抛出int型的异常增加可读性

int main()
{
    try{
        f(3);
    }catch(...){
        cout<<"exception"<<endl;
    }

    return 0;
}
