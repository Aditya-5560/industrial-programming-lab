/*
Find Odd factorial

Input  : 5
Output : 15  (1*3*5)

Input  : -5
Output : 15

Input  : 10
Output : 945  (1*3*5*7*9)
*/

#include<iostream>
using namespace std;

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iFact = 1;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = OddFactorial(iValue);

    printf("Even Factorial : %d\n",iRet);

    return EXIT_SUCCESS;
}