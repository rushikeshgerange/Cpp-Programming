#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;

        Demo()     //Default Constructor
        {
            cout<<"Inside Defalut Constructor\n";
            i = 0;
            j = 0;
        }

        Demo(int A , int B)        //Parameterised Constructor
        {
            cout<<"Inside parameterised consutructor\n";
            i = A;
            j = B;
        }

        // Demo &ref = obj2;
        Demo(Demo &ref)           //Copy Constructor
        {
            cout<<"Inside copy constructor\n";
            i = ref.i;
            j = ref.j;
        }

        ~Demo()
        {
            cout<<"Inside Destructor \n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}