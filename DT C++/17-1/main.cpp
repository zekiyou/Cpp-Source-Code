#include <iostream>

using namespace std;

class Test{
private:
    int i;
    int j;
public:
    void GetI(){
        printf("%d\n",i);
    }
    int GetJ(){
        printf("%d\n",j);
    }
    Test(){
        printf("Test() begin\n");
        i=5;
        j=1;
        printf("Test() end\n");
    }
};

int main()
{

    Test t1;

    t1.GetI();
    t1.GetJ();
    Test* t2=new Test;


    t2->GetI();
    t2->GetJ();
    return 0;
}
