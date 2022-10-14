#include <iostream>
using namespace std;

void func() throw (int) {
    throw 'c';
}

void my_unexpected() {
    cout << "my_unexpected()" << endl;
    exit(1);
}

int main(int argc, char const *argv[])
{
    set_unexpected(my_unexpected);
    try {
        func();
    } catch (int i) {
        cout << i << endl;
    } catch (char c) {
        cout << c << endl;
    }
    return 0;
}
