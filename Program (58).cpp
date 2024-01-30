#include<iostream>
using namespace std;

void Swap(int iNo1, int iNo2)
{
    int Temp;
    Temp = iNo1;
    iNo1 = iNo2;
    iNo2 = Temp;
};

int main()
{
    int iValue1 = 10;
    int iValue2 = 20;

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    Swap(iValue1, iValue2);

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    return 0;
}