#include <iostream>

using namespace std;

struct Gril
{
private:
    int age;
    int weight;
public:
    void print(){
        age=22;
        weight=40;

        printf("gril's age=%d, weight=%d",age, weight);

    }
};

//C++中的封装

int main()
{
    Gril Marry;
    Marry.print();

    return 0;
}
