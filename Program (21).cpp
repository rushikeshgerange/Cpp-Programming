#include<iostream>
using namespace std;

class Demo
{
    public:
        int x, y;

        Demo()
        {
            cout<<"Inside Demo Constructor\n";
            x = 10;
            y = 20;
        }

        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside fun of demo\n";
        }
};


class Hello
{
    public:
        int a , b ;

        Hello()
        {
            cout<<"Inside Hello Constructor\n";
            a = 30;
            b = 40; 
        }

        ~Hello()
        {
            cout<<"Inside Hello destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of hello\n";
        }
};


class Marvellous : public Demo , public Hello
// class Marvellous : public Hello , public Demo
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside constructor of Marvellous\n";
            p = 60;
        }

         ~Marvellous()
        {
            cout<<"Inside destructor of Marvellous\n";
        }

        void sun()
        {
            cout<<"Inside sun of Marvellous\n";
        }
};


int main()
{
    Marvellous mobj;

    cout<<sizeof(mobj)<<" bytes \n";

    mobj.Fun();
    mobj.gun();
    mobj.sun();
    

    return 0;
}