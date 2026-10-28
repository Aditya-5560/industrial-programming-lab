//Accept one number from user (n) and print that n number of even numbers on screen

#include<stdio.h>
#include<stdlib.h>

void printEven(int iNo)
{
    //Filter
    if(iNo<0)
    {
        return;
    }

    int iCnt = 0;
    int iEven = 0;

    for (iCnt = 1,iEven = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iEven);
        iEven += 2;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printEven(iValue);

    return EXIT_SUCCESS;
}
