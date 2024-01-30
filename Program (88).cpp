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

        bool BinarySearch(int iNo)
        {
            bool bFlag = false;
            int iStart =  0;
            int iMid = 0;
            int iEnd = 0;

            iStart = 0;
            iEnd = iSize -1;

            while(iStart <= iEnd)
            {
                iMid = iStart + (iEnd - iStart)/2;

                if(Arr[iMid] == iNo)
                {
                    bFlag = true;
                    break;
                }
                else if(Arr[iMid] < iNo)
                {
                    iStart = iMid + 1;
                }
                else if(Arr[iMid] > iNo)
                {
                    iEnd = iMid - 1;
                }
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

    bRet = aobj->BinarySearch(iValue);
    
    if(bRet == true)
    {
        cout<<"Number "<<iValue<<" is present in the array.\n";
    }
    else
    {
        cout<<"There is no such element in the array.\n";
    }

    delete aobj;

    return 0;
}