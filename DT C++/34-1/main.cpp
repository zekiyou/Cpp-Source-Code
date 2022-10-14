#include <iostream>

using namespace std;

class Test{
    int a[5];
public:
    int& operator [] (int i){
        return a[i];
    }

    //ÖØÔØ []²Ù×÷·û
};

int main()
{
    Test t1;
    for(int i=0;i<5;i++){
        t1[i]=i+1;
    }

    for(int i=0;i<5;i++){
        cout<<t1[i]<<endl;
    }

    return 0;
}
