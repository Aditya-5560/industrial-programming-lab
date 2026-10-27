#include<stdio.h>
#include<stdlib.h>

int SumDigits(int iNo)
{
    int iSum =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo /= 10;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Summation of digits : %d\n",iRet);

    return EXIT_SUCCESS;
}