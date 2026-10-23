#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPrime(int iNo)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt =1 ;iCnt<=iNo/2 ;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }

    if(iSum == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a nnumber : ");
    scanf("%d",&iValue);

    bRet = checkPrime(iValue);

    if(bRet == true)
    {
        printf("It is Prime number\n");
    }
    else
    {
        printf("It is not a prime number\n");
    }

    return EXIT_SUCCESS;
}