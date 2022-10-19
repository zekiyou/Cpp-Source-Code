#include <iostream>
#include <type_traits>

using namespace std;

int main() {

    //123U 类型为 unsigned int
    auto u = 123U;
    //123 类型为 signed int
    auto i = 123;

    if (typeid(u) == typeid(int))
    {
        cout << "typeid(u) == typeid(int)" << endl;
    }

    if (typeid(u) == typeid(unsigned int))
    {
       cout << "typeid(u) == typeid(unsigned int)" << endl;
    }
    
    if (typeid(i) == typeid(int))
    {
        cout << "typeid(i) == typeid(int)" << endl;
    }
    
    if (typeid(i) == typeid(unsigned int))
    {
       cout << "typeid(i) == typeid(unsigned int)" << endl;
    }
    
    return 0;
}