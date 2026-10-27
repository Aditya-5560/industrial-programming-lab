#include<stdio.h>
#include<stdlib.h>

void displayEvenDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2 )== 0)
        {
            printf("%d\n",iDigit);
        }
        iNo /= 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    displayEvenDigits(iValue);

    return EXIT_SUCCESS;
}