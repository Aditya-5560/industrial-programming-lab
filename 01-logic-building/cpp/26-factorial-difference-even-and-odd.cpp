/*
Find Difference between Even and Odd factorial

Input  : 5
Output : 8-15   (2*4)-(1*3*5)

Input  : -5
Output : 8-15   (2*4)-(1*3*5)

Input  : 10
Output : 3840-945  (2*4*6*8*10)-(1*3*5*7*9)
*/

#include<iostream>
using namespace std;

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iEvenFact-iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = FactorialDiff(iValue);

    printf("Difference in Factorial : %d\n",iRet);

    return EXIT_SUCCESS;
}