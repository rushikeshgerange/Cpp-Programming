#include<iostream>
using namespace std;

class Base
{
    public:
        int i, j, k;

        virtual void fun()         //  1000   defination
        {
            cout<<"Inside base fun \n";
        }

        virtual void gun()        //   2000   defination
        {
            cout<<"Inside base gun \n";
        }

        void sun()        //   3000   defination
        {
            cout<<"Inside base sun \n";
        }

        void run()        //   4000   defination
        {
            cout<<"Inside base run ";
        }

};

class Derived : public Base
{
    public:
        int a,b;

        virtual void gun()          //   5000   Redefination
        {
            cout<<"Inside derived gun \n";
        }

        void run()         //    6000    Redefination
        {
            cout<<"Inside derived run \n";
        }

        virtual void mun()         //    7000    Redefination
        {
            cout<<"Inside derived mun \n";
        }

};

int main()
{
    cout<<"Size of base :"<<sizeof(Base)<<"\n";
    cout<<"Size of derived :"<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
 // bp->mun();

    return 0;
}