#include<iostream>
using namespace std;

template <class T>
class Array
{
    public:
        T *Arr;
        T Size;

        Array(int Length);
        ~ Array();
        void Accept();
        void Display();
        T Addition();
};

        template <class T>
        Array<T> :: Array(int Length)
        {
            Size = Length;
            Arr = new T[Size];
        }

        template <class T>
        Array<T> :: ~ Array()
        {
            delete []Arr;
        }

        template <class T>
        void Array<T> :: Accept()
        {
            int iCnt = 0;

            cout<<"Enter the elements : \n";

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        template <class T>
        void Array<T> :: Display()
        {
            int iCnt = 0;

            cout<<"Elements of the array are : \n";

            for(iCnt = 0; iCnt < Size; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        template <class T>
        T Array<T> :: Addition()
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

    Array<int> obj(5);

    obj.Accept();
    obj.Display();

    int iRet = 0;

    iRet = obj.Addition();
    cout<<"Addition of all element is : "<<iRet<<"\n";

    return 0;
}