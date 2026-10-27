#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iSum = 0;
    int iCount = 0;
    float fAvg = 0.0f;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        int iDigit = iNo % 10;
        iSum += iDigit;
        iCount++;
        iNo /= 10;
    }
    fAvg = ((float)iSum/(float)iCount);
    return fAvg;
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digits : %f\n",fRet);

    return EXIT_SUCCESS;
}