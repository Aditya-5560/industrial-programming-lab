//Accept one number and check whether is it divisible by 5 or not

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL check(int iNo)
{
    if(iNo % 5 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d",&iValue);

    bRet = check(iValue);

    if(bRet == TRUE)
    {
        printf("It is divisible by 5\n");
    }
    else
    {
        printf("It is not divisible by 5\n");
    }


    return EXIT_SUCCESS;
}
