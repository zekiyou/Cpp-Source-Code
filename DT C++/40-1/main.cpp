#include <iostream>

using namespace std;

class Test
{
    int i;
public:
    Test(int i) {
        cout<<"Test对象被构造"<<endl;
        this->i=i;
    }

    ~Test() {
        cout<<"Test对象被析构"<<endl;

    }

    Test& operator ++ (){
        ++i;
        return *this;
    }//前置++重载 返回的是改变了的Test对象 无需参数

    Test operator ++ (int){
        Test m_t=Test(i);
        i++;
        return m_t;
    }
    //后置++重载 返回的是还未改变的Test对象 用int占位符表示是后置++
};


int main()
{
    int i=0;
    i++;
    ++i;
    /*
        8 [1]	    i++;
0x40163e  <+0x000e>        83 44 24 0c 01  addl   $0x1,0xc(%esp)
        9 [1]	    ++i;
0x401643  <+0x0013>        83 44 24 0c 01  addl   $0x1,0xc(%esp)
    */

    //基础数据类型 当不使用返回值时  编译器优化后  ++i和i++的汇编语句相同

    cout<<i++<<endl;
    cout<<++i<<endl;
    //使用返回值时 ++i 先自增后取值 i++先取值后自增



    Test t0(0);

    t0++;
    ++t0;
    //类类型 重载++后 后置++会有额外对象的构造和析构开销
    //当不使用返回值时 使用前置++效率更高

    return 0;
}
