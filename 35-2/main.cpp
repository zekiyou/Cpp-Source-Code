
#include <iostream>
using namespace std;


int add(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}


int calculate(int a,int b, int(*p)(int ,int )){
	return (*p)(a,b);
}
//C语言通过函数指针实现函数作为参数传入函数中调用

class class_add{

public:
	int operator () (int a,int b);	
};

class class_sub{

public:
	int operator () (int a,int b);	
};

class_add::operator () (int a, int b ){
	return a+b;
}

class_sub::operator () (int a, int b ){
	return a-b;
}

template<typename T>

int class_calculate(int a,int b, T& t){
	return t(a,b);
}

//C++通过函数对象来完成 

int main(){
	
	int(*pa)(int ,int )=add;
	int(*ps)(int ,int )=sub;	
	
	int a=3;
	int b=2;
	
	cout<<calculate(a,b,pa)<<endl;
	cout<<calculate(a,b,ps)<<endl;
	
	class_add ca;
	class_sub cs;	
	cout<<class_calculate(a,b,ca)<<endl;
	cout<<class_calculate(a,b,cs)<<endl;
	
	return 0;
}
