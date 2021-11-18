#include <iostream>

using namespace std;

class Test
{
private:
    int m_i;
public:
    explicit Test(int i);
    ~Test();
};

Test::Test(int i)
{
    m_i = i;
}

Test::~Test()
{
}


int main(int argc, char const *argv[])
{
    
    Test t1 = 2;
    Test t1 = Test(2);

    return 0;
}
