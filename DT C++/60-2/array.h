#ifndef ARRAY_H
#define ARRAY_H
template <typename T, int N>
class Array
{
    T a[N];
public:
    int Getlen();
    bool Set(int index, T value);
    T Get(int index);
    T& operator[] (int index);
};

template <typename T, int N>
T Array<T,N>::Get(int index){
    if(index>=0 && index<N)
        return a[index];
    else
        return -1;
}

template <typename T, int N>
bool Array<T,N>::Set(int index, T value){
    bool ret;
    ret=index>=0 && index<N;
    if(ret){
        a[index]=value;
    }
    return ret;
};

template <typename T, int N>
T& Array<T,N>::operator[] (int index) {
    return a[index];
}

template <typename T, int N>

int Array<T,N>::Getlen(){
    return N;
}

#endif // ARRAY_H
