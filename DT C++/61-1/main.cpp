#include <iostream>
#include <memory>
#include <string>
using namespace std;

class A
{
    string str;
public:
    A(string s) {cout<<"A被构造"<<endl;str=s;}

    void print(){
        cout<<str<<endl;
    }

    ~A() {cout<<"A被析构"<<endl;}
};

int main()
{
    auto_ptr<A> p(new A("hAPPY"));

    p->print();

    cout<<p.get()<<endl;

    return 0;
}
