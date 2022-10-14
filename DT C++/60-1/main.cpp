#include <iostream>
using namespace std;

template <typename T, int N>
void func(){
    T a[N]={0};
    for(int i=0;i<N;i++){
        a[i]=i;
    }
    for(int i=0;i<N;i++){
        cout<<a[i]<<endl;;
    }
}
//数值类参数模板

int main()
{
    func<double,10>();

    return 0;
}
