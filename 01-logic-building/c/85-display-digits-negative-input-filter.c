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
        printf("%d\n",iDigit);
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