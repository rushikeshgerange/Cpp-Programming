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
        }

int main()
{

    Array obj(5);

    obj.Accept();
    obj.Display();

    return 0;
}