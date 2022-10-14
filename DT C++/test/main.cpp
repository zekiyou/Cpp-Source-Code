#include <iostream>
using namespace std;

class Object
{
private:

public:
    int i;
    Object();
    Object(const Object& t1);
    ~Object();
};

Object::Object()
{
    cout << "Object::Object(/* args */)" << endl;
}

Object::Object(const Object& t1)
{
    cout << "Object::Object(const Object& t1) " << endl;
}

Object::~Object()
{
    cout << "Object::~Object()" << endl;
}

Object func(Object& t1) {

    Object t2;

    t2.i = t1.i*2;

    return t2;
}

Object func2(Object& t1) {
    t1.i = t1.i*2;
    return t1;
}

int main(int argc, char const *argv[])
{
    Object t1;

    cout << "=======================" << endl;

    Object t3 = func(t1);

    cout << "=======================" << endl;

    Object t2 = func2(t1);

    cout << "=======================" << endl;

    return 0;
}
