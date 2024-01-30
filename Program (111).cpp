#include<iostream>
using namespace std;

int AdditionI(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

float AdditionF(float No1, float No2)
{
    float Ans = 0.0f;
    Ans = No1 + No2;
    return Ans;
}

double AdditionD(double No1, double No2)
{
    double Ans = 0.0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = AdditionI(10,11);
    fRet = AdditionF(10.0f,11.0f);
    dRet = AdditionD(10.0,11.0);


    cout<<iRet<<"\n";
    cout<<fRet<<"\n";
    cout<<dRet<<"\n";


    return 0;
}