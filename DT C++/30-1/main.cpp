#include <iostream>

using namespace std;

class  Complex
{
    int a;
    int b;

public:
     Complex(int a=0,int b=0) {
         this->a=a;
         this->b=b;
     }

     Complex operator + (Complex b){
         Complex ret;
         ret.a=this->a+b.a;
         ret.b=this->b+b.b;
         printf("Complex::operator +(Complex b)\n");
         return ret;
     }

     //成员函数完成操作符重载

     //操作符重载的本质是通过特殊的函数扩展操作符(+)的功能 重载的规则符合函数重载的规则 (+的参数列表不同)

     //当同时成员函数和全局函数完成操作符重载时 优先使用成员函数的操作符重载

     //成员函数的操作符重载只需要右操作数 左操作数是对象本身


     int GetA(){
         return a;
     }

     int GetB(){
         return b;
     }

     friend Complex operator +(Complex a, Complex b);

};

Complex operator +(Complex a, Complex b){
    Complex ret;
    ret.a=a.a+b.a;
    ret.b=a.b+b.b;
    printf("Complex operator +(Complex a, Complex b)\n");
    return ret;
}

//全局函数完成类的重载

int main()
{
    Complex c1(1,2);
    Complex c2(2,3);

    Complex c3 = c1.operator + (c2);

    printf("%d\n",c3.GetA());
    printf("%d\n",c3.GetB());
    

	Complex c4 = operator + (c1,c2); 

	printf("%d\n",c4.GetA());
    printf("%d\n",c4.GetB());

    return 0;
}
