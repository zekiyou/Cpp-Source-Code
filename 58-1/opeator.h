#ifndef OPEATOR_H
#define OPEATOR_H

template <typename T>
class Opeator
{
    T a;
    T b;
public:
    T add();
    Opeator(T a, T b);
};

template <typename T>
T Opeator<T>::add(){
    return a+b;
}
template <typename T>
Opeator<T>::Opeator(T a, T b):a(a),b(b){}


#endif // OPEATOR_H
