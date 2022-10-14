#include <iostream>

using namespace std;

class Test
{
private:
    int m_i;
public:
    operator int () const;
    Test(int i);
    ~Test();
};

Test::Test(int i) : m_i(i) 
{
}

Test::~Test()
{
}

Test::operator int  () const
{
    return m_i;
}



int main(int argc, char const *argv[])
{
    Test t1(3);

    cout << t1 + 7 << endl; 

    return 0;
}
