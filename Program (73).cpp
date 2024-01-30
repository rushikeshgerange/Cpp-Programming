#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int Size;

        Array(int Length);
        ~ Array();
        void Accept();
        void Display();
        int Addition();
};

        Array :: Array(int Length)
        {
            Size = Length;
            Arr = new int[Size];
        }

        Array :: ~ Array()
        {
            delete []Arr;
        }

        void Array :: Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Array :: Display()
        {
            int iCnt = 0;

            cout<<"Elements of the array are : \n";

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int Array :: Addition()
        {
            int iCnt = 0;
            int Sum = 0;

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                Sum = Sum + Arr[iCnt];
            }
            return Sum;
        }

int main()
{

    Array obj(5);

    obj.Accept();
    obj.Display();

    int iRet = 0;

    iRet = obj.Addition();
    cout<<"Addition of all element is : "<<iRet;

    return 0;
}