#ifndef SINGALTON_H
#define SINGALTON_H

template <typename T>
class singalton
{
    static T* instance;
public:
    static T* GetInstance();
};

template <typename T>
T* singalton<T>::instance=NULL;

template <typename T>
T* singalton<T>::GetInstance(){
    if(singalton::instance==NULL)
        instance=new T;
    return instance;
}


#endif // SINGALTON_H
