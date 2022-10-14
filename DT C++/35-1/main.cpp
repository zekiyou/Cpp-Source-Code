#include <iostream>

using namespace std;

class Fib{
  int a0=0;
  int a1=1;
public:

  Fib(int n){
      for(int i=0;i<n;i++)
        operator ()();
  }

  int operator () (){
      int ret=a1;
      a1=a0+a1;
      a0=ret;
      return ret;
   }
};

int main()
{
    Fib fib(0);
    cout<<fib()<<endl;
    //像函数一样调用类
    return 0;
}
