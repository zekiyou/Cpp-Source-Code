#include <iostream>

using namespace std;

class Pointer{
    int* m_p;
public:
    Pointer(int* p=NULL){
        m_p=p;
        cout<<"m_p指向堆空间"<<endl;
    }
    ~Pointer(){
        delete m_p;
        cout<<"m_p所指内容被delete"<<endl;
    }
    int operator * (){
        return *m_p;
    }

    Pointer(Pointer& obj){
        delete m_p;
        m_p=obj.m_p;
        obj.m_p=NULL;
    }

    Pointer& operator = (Pointer& obj){
        if(this!=&obj){
            delete m_p;
            m_p=obj.m_p;
            obj.m_p=NULL;
        }
    }

    bool isNull(){
        return (this->m_p == NULL);
    }

};
int main()
{

    Pointer p(new int(10));
    cout<<*p<<endl;
    //智能指针使用


    Pointer p2=p;

    if(p.isNull())
        cout<<*p2<<endl;
    //一片堆空间只能有一个指针指向

    return 0;
}
