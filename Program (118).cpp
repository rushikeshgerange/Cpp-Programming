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

        void gun()
        {
            cout<<"Inside base gun \n";
        }

        void sun()
        {
            cout<<"Inside base sun \n";
        }

        void run()
        {
            cout<<"Inside base run ";
        }

};

class Derived : public Base
{
    public:
        int a,b;

        void gun()          //Redefination
        {
            cout<<"Inside derived gun \n";
        }

        void run()         //Redefination
        {
            cout<<"Inside derived run \n";
        }

};

int main()
{
    Base *bp = new Derived;

    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();

    return 0;
}