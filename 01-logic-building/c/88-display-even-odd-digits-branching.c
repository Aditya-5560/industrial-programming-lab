#include<stdio.h>
#include<stdlib.h>

void displayDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2 ) == 0)
        {
            printf("Even : %d\n",iDigit);
        }
        else
        {
            printf("Odd  : %d\n",iDigit);
        }
        iNo /= 10;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    displayDigits(iValue);

    return EXIT_SUCCESS;
}