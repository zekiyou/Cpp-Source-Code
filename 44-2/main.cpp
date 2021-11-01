#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Object{
protected:
    //想被子类继承使用的用protected
    string obName;
    string obInfo;
public:
    Object(){
        obName="Object";
        obInfo="";
    }

    string Getname(){
        return obName;
    }

    string GetInfo(){
        return obInfo;
    }
};

class Point: public Object{
private:
    //不被子类访问的用private
    int mX;
    int mY;
public:
    Point(int x=0,int y=0){
        mX=x;
        mY=y;
        ostringstream a;
        obName="Point";
        a<<obName<<":("<<mX<<","<<mY<<")";
        obInfo=a.str();
    }



    int GetX() {return mX;}
    int GetY() {return mY;}
};

class Line: public Object{
    Point p1;
    Point p2;
public:
    Line(Point p1, Point p2){
        this->p1=p1;
        this->p2=p2;

        ostringstream a;
        obName="Line";
        a<<obName<<"from"<<this->p1.GetInfo()<<"to"<<this->p2.GetInfo();
        obInfo=a.str();

    }
};

//描述 Point，Line组合关系 Point,Line,Object继承关系

int main()
{
    Point p1(1,2);
    Point p2(3,6);
    Line l(p1,p2);
    cout<<l.GetInfo()<<endl;
    return 0;
}
