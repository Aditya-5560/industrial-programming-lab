#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPerfect(int iNo)
{
    int iCnt = 0,iSum =0;
    for(iCnt = 1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return (iSum==iNo);
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = checkPerfect(iValue);

    if(bRet==true)
    {
        printf("It is a perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");

    }

    return EXIT_SUCCESS;
}
//Time complexity : O(n/2)