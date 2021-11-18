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


int main(int argc, char const *argv[])
{
    
    Test t1 = 2;
    
    int (Test::*mypointer) () = &Test::getI;

    cout  <<    (t1.*mypointer)()  << endl;

    void (*mypointer2) () = &Test::Func;

    mypointer2();


    return 0;
}
