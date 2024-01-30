// C++ Program

#include<iostream>
using namespace std;

class Digit
{
    private:
        int iNo;

    public:
        Digit(int x)
        {
            iNo = x;
        }

        int DigitCount()
        {
            int iDigit = 0;
            int iCnt = 0;

            while(iNo !=0)
            {
                iDigit = iDigit % 10;
                iCnt++;
                iNo = iNo / 10;
            }
            return iCnt;
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number : "<<endl;
    cin>>iValue;

    Digit nobj(iValue);

    iRet = nobj.DigitCount();

    cout<<"Count of digit is : "<<iRet<<endl;

    return 0;
}