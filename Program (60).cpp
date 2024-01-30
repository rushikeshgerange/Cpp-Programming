#include<iostream>
using namespace std;

void Swap(double &dNo1, double &dNo2)
{
    double Temp;
    Temp = dNo1;
    dNo1 = dNo2;
    dNo2 = Temp;
};

int main()
{
    double dValue1 = 10.11;
    double dValue2 = 25.21;

    cout<<"Value of iValue1 : "<<dValue1<<"\n";
    cout<<"Value of iValue2 : "<<dValue2<<"\n";

    Swap(dValue1, dValue2);

    cout<<"Value of iValue1 : "<<dValue1<<"\n";
    cout<<"Value of iValue2 : "<<dValue2<<"\n";

    return 0;
}