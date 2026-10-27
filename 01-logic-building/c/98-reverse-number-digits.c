#include<stdio.h>
#include<stdlib.h>

int reverse(int iNo)
{
    int iRev =0;
    while(iNo != 0)
    {
        iRev = iRev*10 + iNo % 10;
        iNo /= 10;  
    }
    return iRev;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = reverse(iValue);

    printf("Reverse number is %d\n",iRet);

    return EXIT_SUCCESS;
}