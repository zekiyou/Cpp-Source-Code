#include <iostream>
using namespace std;

class OBject
{
private:
    /* data */
public:
    OBject(/* args */);
    ~OBject();

    void* operator new[] (size_t size) {
        cout << "size:" << size << endl;
        // 13 = 5*1 + 8
        return malloc(size);
    }

};

OBject::OBject(/* args */)
{
    cout << "OBject::OBject" << endl;
}

OBject::~OBject()
{
    cout << "OBject::~OBject" << endl;
}


int main(int argc, char const *argv[])
{
    OBject* o = new OBject[5];

    cout << "sizeof(Object)：" << sizeof(OBject) << endl;

    delete[] o;

    return 0;
}
