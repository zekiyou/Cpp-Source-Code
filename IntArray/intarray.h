#ifndef INTARRAY_H
#define INTARRAY_H
class IntArray{
private:
    int m_length;
    int* m_pointer;
    IntArray(int length);
    //完成一阶构造 与系统资源无关的初始化
    bool construct();
    //完成二阶构造 系统资源使用的初始化


public:
    int Getlength(void);
    bool SetArray(int index,int value);
    int GetArray(int index);
    void Free();
    static IntArray* NewArray(int length);
    //二阶构造模式 留出NewArray创建对象
    ~IntArray();
    //析构函数完成堆空间释放
    IntArray(const IntArray& i);
    //手动完成深拷贝
    int operator [] (int i);
    //重载[] 操作符
};
#endif // INTARRAY_H
