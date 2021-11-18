#include <iostream>

using namespace std;

class Test
{
private:
    int m_i;
public:
    Test(int i);
    ~Test();
    int getI();
    static void Func();
    virtual void virFunc();

    int m_a;

    static int m_b;

};

void Test::Func()
{
    cout << "static void Func();" << endl;
}

void Test::virFunc()
{
    cout << "virtual void virFunc();" << endl;
}

Test::Test(int i)
{
    m_i = i;
}

Test::~Test()
{
}

int Test::getI()
{
    return m_i;
}


int Test::m_b = 50;

int main(int argc, char const *argv[])
{


    cout << Test::m_b << endl;

    
    Test t1 = 2;

    int Test::* t2 = &Test::m_a;

    cout << t2 << endl;

    t1.*t2 = 100;

    cout << t1.m_a << endl; 


    int* t3 = &Test::m_b;

    *t3 = 200;

    cout << Test::m_b << endl;


    return 0;
}
