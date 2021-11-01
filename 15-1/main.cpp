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

        print("gril's age=%d, weight=%d",age,weight);

    }
};

//C++ÖÐµÄ·â×°

int main()
{
    Gril Marry;
    Marry.print();

    return 0;
}
