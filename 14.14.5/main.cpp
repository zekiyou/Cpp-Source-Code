#include <iostream>
#include <string>

using namespace std;

class Test
{
public:
    string s;
    int i;
};



int main(int argc, char const *argv[])
{
    Test t1;
    
    t1.s = "this is my test";

    const char* p = t1.s.c_str();

    cout << p << endl;

    // Test t2 = std::move(t1);

    // p = t1.s.c_str();

    // cout << p << endl;

    return 0;
}
