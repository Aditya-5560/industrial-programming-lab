#include<stdio.h>
#include<stdlib.h>

void checkPrime(int iNo)
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
        printf("It is Prime number\n");
    }
    else
    {
        printf("It is not a prime number\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a nnumber : ");
    scanf("%d",&iValue);

    checkPrime(iValue);

    return EXIT_SUCCESS;
}