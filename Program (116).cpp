#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j, k;

        void fun()
        {
            cout<<"Inside base fun \n";
        }

};

class Derived : public Base
{
    public:
        int a,b;

         void gun()
        {
            cout<<"Inside base gun \n";
        }

};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of bojb :"<<sizeof(bobj)<<"\n";
    cout<<"Size of dojb :"<<sizeof(dobj)<<"\n";

    bobj.fun();

    dobj.fun();
    dobj.gun();

    return 0;
}