#include<iostream>
using namespace std;

void Swap(float &fNo1, float &fNo2)
{
    float Temp;
    Temp = fNo1;
    fNo1 = fNo2;
    fNo2 = Temp;
};

int main()
{
    float fValue1 = 10.11;
    float fValue2 = 20.21;

    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";

    Swap(fValue1, fValue2);

    cout<<"Value of iValue1 : "<<fValue1<<"\n";
    cout<<"Value of iValue2 : "<<fValue2<<"\n";

    return 0;
}