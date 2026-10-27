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

float AverageDigits(int iNo)
{
    int iDigit = 0,iSum = 0,iCount =0;
    float fAvg = 0.0f;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo); 
    iCount = CountDigits(iNo);

    fAvg = ((float)iSum / (float)iCount);     
    return fAvg;
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digits : %.2f\n",fRet);      //Width specifier specifies how many digits after .

    return EXIT_SUCCESS;
}