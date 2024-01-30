#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
    public:
        int i , j , k;

        Demo()
        {
            cout<<"Inside Constructor\n";
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }

        void Display()
        {
            cout<<"Inside Display\n";
        }
};

int main()
{

    Demo obj1;

    obj1.Display();

    cout<<"_________________\n";

    Demo *ptr = new Demo;
    // Demo *ptr = (Demo *)malloc(sizeof(Demo));

    ptr-> Display();

    delete ptr;
    // free(ptr);

    return 0;
}