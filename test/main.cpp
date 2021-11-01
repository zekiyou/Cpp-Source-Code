#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Animal{
public:
    int age;
};

class Dog : public Animal{
public:
   //   string bark;
};

int main(int argc, char const *argv[])
{
    Dog d;
    Animal a;

    cout << d.age << endl;

    cout << a.age << endl;

    return 0;
}
