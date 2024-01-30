#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
        void gun();
};

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:

        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
    friend class Hello;
};

// Retur_Value Class_Name ::  Function_Name();
void Hello::fun()
{
    Demo obj;
    cout<<"Inside Hello fun\n";
    cout<<"Value of i is :"<<obj.i<<"\n";
    cout<<"Value of j is :"<<obj.j<<"\n";
    cout<<"Value of k is :"<<obj.k<<"\n";
};

void Hello::gun()
{
    Demo obj;
    cout<<"Inside Hello gun\n";
    cout<<"Value of i is :"<<obj.i<<"\n";
    cout<<"Value of j is :"<<obj.j<<"\n";
    cout<<"Value of k is :"<<obj.k<<"\n";
};

int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}