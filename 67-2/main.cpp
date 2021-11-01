#include <iostream>

using namespace std;

class Test{
public:
    Test() {
        cout<<"Test()"<<endl;
        throw 1;
    }

    virtual ~Test(){
        cout<<"~Test()"<<endl;
        throw 0;
    }
};

int main()
{

    try{
        Test t;
    }catch(int i){
        cout<<"ERROR"<<i<<endl;
    }




    return 0;
}
