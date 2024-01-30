#include<iostream>
using namespace std;

class Demo
{
        int i;
    public:
        int j;
    private:
        int k;
    protected:
        int a;
    public:
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
            a = 40;
        }

        void Display()
        {
            cout<<"Value of i "<<i<<"\n";
            cout<<"Value of j "<<j<<"\n";
            cout<<"Value of k "<<k<<"\n";
            cout<<"Value of a "<<a<<"\n";
        }
};

int main()
{
    Demo obj;

//  cout<<"Value of i "<<obj.i<<"\n";
    cout<<"Value of j "<<obj.j<<"\n";
//  cout<<"Value of k "<<obj.k<<"\n";
//  cout<<"Value of a "<<obj.a<<"\n";

    obj.Display();    // Display(&obj);

    return 0;
}