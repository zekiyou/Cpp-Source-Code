#include <iostream>
#include <string>
using namespace std;

string operator >>(string s,int n){
	
    string ret="";
    //子串查找 子串提取
    int pos= s.length()-n%s.length();

    ret=s.substr(pos);
    //子串提取

    ret +=s.substr(0,pos);

    return ret;
}
// C++方式实现

int main()
{
    cout << "Hello World!" << endl;

    string str="ABCDEFGHIJK";

    cout<<(str>>1)<<endl;

    return 0;
}
