#include <iostream>
using namespace std;

void my_new_handle(){
    cout << "my_new_handle()" << endl;
}

void func() {
    new_handler old_hanlder = set_new_handler(my_new_handle);

    if (old_hanlder != nullptr) {
        cout << old_hanlder << endl;
    } else {
        cout << "is nullptr" << endl;
    }
    // g++编译器并没有实现new_handle 异常是在new中抛出的
}

void func2() {
  std::cout << "Attempting to allocate 1 MiB...";
  try{
    char* p = new char [1048576000000000];
  } catch(std::bad_alloc x){
      std::cout << "Failed!\n";
      return;
  }
  std::cout << "Succeeded!\n";
}

void func3() {
  std::cout << "Attempting to allocate 1 MiB...";
  char* p = new (std::nothrow) char [104857000006000];
  if (p==0) 
    std::cout << "Failed!\n";
  else {
    std::cout << "Succeeded!\n";
    delete[] p;
  }
}

int main(int argc, char const *argv[])
{
    //func();
    func2();
    func3();
    return 0;
}
