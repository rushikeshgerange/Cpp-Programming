#include<iostream>
using namespace std;  

class Arithmatic
{
    public:
        int No1;
        int No2;

    Arithmatic(int A, int B);
    int Addition();
};

    Arithmatic :: Arithmatic(int A, int B)
    {
        this->No1;
        this->No2;
    }

    int Arithmatic :: Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

int main()
{
    Arithmatic obj1(11,10);
    int Ret = 0;

    Ret = obj1.Addition();
    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}