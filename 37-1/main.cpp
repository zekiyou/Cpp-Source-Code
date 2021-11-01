#include <iostream>

using namespace std;

class Test{
  int i;
public:
  Test(int i){
      cout<<"Test被创建"<<endl;
      this->i=i;
  }
  int GetI(){
      return i;
  }
  ~Test(){
      cout<<"Test被释放"<<endl;
  }
};

class Pointer{
    Test* mp;
public:
    Pointer(Test* p=NULL){
        mp=p;
    }

    Pointer( Pointer& obj){
        delete mp;
        mp=obj.mp;
        obj.mp=NULL;
    }

    Pointer& operator = ( Pointer& obj){
        if(this!=&obj){
            delete mp;
            mp=obj.mp;
            obj.mp=NULL;
        }
    }

    Test* operator -> (){
        return mp;
    }

    Test& operator * (){
        return *mp;
    }

    ~Pointer(){
        delete mp;
    }
};

int main(){
    Pointer p(new Test(8));
    //Pointer p(Test(8));
    //因为会被free所以智能指针一定指向堆空间
    cout<< p->GetI() <<endl;

    Pointer p2=p;
    //通过重载拷贝构造 完成不指向同一区域

    return 0;
}

