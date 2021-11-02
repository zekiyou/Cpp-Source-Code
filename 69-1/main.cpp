#include <iostream>
using namespace std;

class Object
{
private:
    int m_value;
    static const unsigned int m_count = 4;
    static char c_buffer[];
    static char c_map[];
public:

    void* operator new (size_t size) {
        void* ret = nullptr;

        for (int i = 0; i < m_count; i++)
        {
            if (!c_map[i]) {
                c_map[i] = 1;
                cout << "new :" << i << endl;
                ret = c_buffer + i * sizeof(Object);
                break;
            }
        }

        return ret;
    }

    void operator delete(void* p) {
        if(p!=nullptr) {
            char* mem = reinterpret_cast<char*>(p);
            int index = (mem-c_buffer)/sizeof(Object);
            int flag = (mem-c_buffer)%sizeof(Object);

            if ((flag == 0) && (index >=0) && (index < m_count))
            {
                cout << "delete :" << index << endl;
                c_map[index] = 0;
                cout << "delete successful" << endl;
            }
            

        }
    }

    Object(int value);
    ~Object();
};

Object::Object(int value = 0)
{
    m_value = value;
}

Object::~Object()
{
}

char Object::c_map[m_count] = {0};
char Object::c_buffer[sizeof(Object) * Object::m_count] = {0};

int main(int argc, char const *argv[])
{
    Object* o1 = new Object;
    delete o1;
    Object* o2 = new Object;
    Object* o3 = new Object;
    delete o3;
    delete o2;

    return 0;
}
