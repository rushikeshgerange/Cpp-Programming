#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j ;
        const int k ;

        Demo(int a ,int b, int c) : j(b) , k(c)          //Initialsation list
        {
            i = a;
            // j = b;
            // k = c;
        }
};

int main()
{
    Demo obj(11,21,51);

    cout<<"Value of i is : "<<obj.i<<"\n";
    cout<<"Value of j is : "<<obj.j<<"\n";
    cout<<"Value of k is : "<<obj.k<<"\n";

    return 0;
}