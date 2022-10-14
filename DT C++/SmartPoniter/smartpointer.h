#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H
template <typename T>
class Pointer{
    T* mp;
public:
    Pointer(T* p=NULL){
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
#endif // SMARTPOINTER_H
