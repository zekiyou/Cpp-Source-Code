#include <iostream>

using namespace std;

template <typename T1,typename T2, typename T3>
T1 Add(T2 a, T3 b){
    return static_cast <T1>(a+b);
}
//多参数函数模板

int main()
{
    cout<<Add<int>(6,8.5)<<endl;
    //返回值类型一定要手动给出
    //其他的参数类型可以通过自动匹配 T2=int Te=double

    return 0;
}
