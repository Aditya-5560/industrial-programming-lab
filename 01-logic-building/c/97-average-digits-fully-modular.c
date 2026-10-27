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

int CountDigits(int iNo)
{
    int iCount =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCount++;
        iNo /= 10;
    }
    return iCount;
}

float averagedigits(int iTotal,int iFrequency)
{
    float fans = 0.0f;
    fans = (float)iTotal / (float)iFrequency;
    return fans;
}

int main()
{
    int iValue = 0,iSum = 0,iCount = 0;
    float fAvg = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue); 
    iCount = CountDigits(iValue);

    fAvg = averagedigits(iSum,iCount);

    printf("Number of digits    : %d\n",iCount);
    printf("Summation of digits : %d\n",iSum);
    printf("Average of digits   : %.2f\n",fAvg);      

    return EXIT_SUCCESS;
}