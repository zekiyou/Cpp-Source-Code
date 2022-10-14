#include <iostream>
using namespace std;

class Object
{
    Object() {}
    static Object* instance;
    public:

    static Object* GetInstance();
    void print() {cout<<this<<endl;}
};

Object* Object::GetInstance(){
    if(Object::instance==NULL)
        instance=new Object;
    return instance;
}

Object* Object::instance=NULL;


int main()
{
    Object* s=Object::GetInstance();
    Object* s2=Object::GetInstance();

    s->print();
    s2->print();

    return 0;
}
