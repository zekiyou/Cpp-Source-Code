#include <iostream>
using namespace std;

class Object
{
private:
    /* data */
public:
    Object(/* args */);
    Object(const Object& t1);
    ~Object();
};

Object::Object(/* args */)
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

Object func(Object t1) {
    return t1;
}

int main(int argc, char const *argv[])
{
    Object t1;

    func(t1);

    cout << "=======================" << endl;

    func(t1);

    cout << "=======================" << endl;

    return 0;
}
