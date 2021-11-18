#include <iostream>

using namespace std;

class B
{
private:
    int m_bm;
public:
    B() : m_bm(100){
        cout << "B() : m_bm(100)" << endl;
    }
    
    ~B() {
        cout << "~B()" << endl;
    }

    B(const B& obj) {
        m_bm = obj.m_bm;
        cout << "B(const B& obj)" << endl;
    }

    B(const B&& obj) {
        
    }

};

int main(int argc, char const *argv[])
{
    
    return 0;
}
