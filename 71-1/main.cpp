#include <iostream>
using namespace std;

void my_terminate() {
    cout << "This is my_terminate" << endl;
    exit(1);
}

int main(int argc, char const *argv[])
{
    set_terminate(my_terminate);

    try
    {
        throw 0;
    } catch (char c) {

    }
        
    return 0;
}