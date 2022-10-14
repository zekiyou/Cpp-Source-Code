#include <iostream>
using namespace std;
template <typename T>
char isptr(T* v){
    return 'a';
}

int isptr(...){
    return 4;
}

#define ISPRT(p) if(sizeof(isptr(p))==1) cout<<"Isptr"<<endl; if(sizeof(isptr(p))==4) cout<<"Is not ptr"<<endl


int main(){
    int i=6;
    ISPRT(i);
    int* p=new int;
    ISPRT(p);

    return 0;
}
