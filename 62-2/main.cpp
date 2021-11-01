#include <iostream>
using namespace std;
template <typename T>
class Object{
    static T* c_instance;
public:
    static T* GetInstance();
};

template <typename T>
T* Object<T>::c_instance = nullptr;

template <typename T>
T* Object<T>::GetInstance()
{
    if (c_instance == nullptr)
        c_instance = new T();
    return c_instance;
}

class Singalton{
    friend class Object<Singalton>;
    Singalton(){
        cout << "Singalton" << endl;
    };
    Singalton(const Singalton&);
    Singalton& operator = (const Singalton&);
public:
    void print();
};

void Singalton::print(){
    cout << "print()" << endl;
}

int main(int argc, char const *argv[])
{
    
    Singalton* s1 = Object<Singalton>::GetInstance();
    Singalton* s2 = Object<Singalton>::GetInstance();

    cout << s1 << ":" << s2 << endl;

    return 0;
}
