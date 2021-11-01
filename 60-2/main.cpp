#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    Array<int , 10> a;
    cout<<a.Getlen()<<endl;

    for(int i=0;i<a.Getlen();i++)
        a.Set(i,i);

    for(int i=0;i<a.Getlen();i++)
        cout<<a[i]<<endl;

    return 0;
}
