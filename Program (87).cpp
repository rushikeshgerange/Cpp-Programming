#include<iostream>
using namespace std;

class Array
{
    private:
        int * Arr;
        int iSize;

    public:
        Array(int X)        // Parametrised Constructor
        {
            iSize = X;
            Arr = new int[iSize];
        }

        ~Array()            // Destructor
        {   
            delete []Arr;
        }

        void Accept()       // Member function
        {
            int iCnt = 0;

            cout<<"Please enter the elements : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()      // Member function
        {
            int iCnt = 0;
            
            cout<<"Elements of the array are : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<endl;
        }

        bool BidirectionalSearch(int iNo)
        {
            int iStart = 0;
            int iEnd = iSize-1;
            bool bFlag = false;

            while(iStart <= iEnd)
            {
                if((Arr[iStart] == iNo) || (Arr[iEnd] == iNo))
                {
                    bFlag = true;
                    break;
                }
                iStart++;
                iEnd--;
            }
            return bFlag;
        }

};  // End of class

int main()
{
    int iLength = 0;
    int iValue = 0;
    int iRet = 0;
    bool bRet = false;

    cout<<"Enter the number of elements: "<<endl;
    cin>>iLength;

    Array *aobj = new Array(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"\nEnter the elements that you want to search it : \n";
    cin>>iValue;

    bRet = aobj->BidirectionalSearch(iValue);
    
    if(bRet == true)
    {
        cout<<"Number is present in the array.\n";
    }
    else
    {
        cout<<"There is no such element in the array.\n";
    }

    delete aobj;

    return 0;
}