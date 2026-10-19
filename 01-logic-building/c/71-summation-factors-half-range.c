#include<stdio.h>
#include<stdlib.h>

int sumFactors(int iNo)
{
    int iCnt = 0,iSum =0;
    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = sumFactors(iValue);

    printf("Summation of factors of %d is %d\n",iValue,iRet);

    return EXIT_SUCCESS;
}
//Time complexity : O(n/2)