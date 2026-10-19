#include<stdio.h>
#include<stdlib.h>

void checkPerfect(int iNo)
{
    int iCnt = 0,iSum =0;
    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum==iNo)
    {
        printf("It is a perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    checkPerfect(iValue);

    return EXIT_SUCCESS;
}
//Time complexity : O(n/2)