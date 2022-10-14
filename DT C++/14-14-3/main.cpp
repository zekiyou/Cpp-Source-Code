#include <iostream>

using namespace std;

class B
{
private:
    int* m_bm;
public:

    B(int x = 0) : m_bm(new int(x)){
        cout << "B() : m_bm(100)" << endl;
    }

    B(const B& obj) : m_bm(new int(*obj.m_bm)) {
        cout << "B(const B& obj) : m_bm(obj.m_bm)" << endl;
    }

    ~B() {
        delete m_bm;
        cout << "~B()" << endl;
    }

    int Get() {
        return *m_bm;
    }
    
    B(B&& obj) : m_bm(obj.m_bm) {
        obj.m_bm = nullptr;
        cout << "B(B&& obj) : m_bm(obj.m_bm)" << endl;
    }

};

B getB()
{
    B b;
    return b;
}


int main(int argc, char const *argv[])
{

    B b = getB();   
    return 0;

}
