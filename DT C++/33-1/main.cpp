#include <iostream>
#include <string>
//标准库里字符串的头文件
using namespace std;

void string_sort(string a[], int len){

    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(a[i]<a[j])
              swap(a[i],a[j]);
        }
    }

}

string string_add(string a[], int len){

    string ret="";

    for(int i=0;i<len;i++)
        ret +=a[i] + " ";
    return ret;
}

int main()
{

    string a[3]={
        "Hello",
        "BeYourself",
        "C++"
    };

    for(int i=0;i<3;i++)
        cout<<a[i]<<endl;

    string_sort(a,3);

    for(int i=0;i<3;i++)
        cout<<a[i]<<endl;

    string ret=string_add(a,3);
        cout<<ret<<endl;

	string s1="abc\0def";
		cout<<s1.size()<<endl;
		cout<<s1.length()<<endl;
        cout<<s1.find('d')<<endl;
		cout<<s1<<endl;
		
    string s2("abc\0def",7);
		cout<<s2.size()<<endl;
		cout<<s2.length()<<endl;
        cout<<s2.find('d')<<endl;
		cout<<s2<<endl;
	
    string s3{'a','b','c','\0','d','e','f'};
        cout<<s3.size()<<endl;
        cout<<s3.length()<<endl;
        cout<<s3.find('d')<<endl;
        cout<<s3<<endl;


    return 0;
}
