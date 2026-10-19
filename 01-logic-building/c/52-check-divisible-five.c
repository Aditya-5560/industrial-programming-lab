#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("It is Divisible by 5\n");
    }
    else
    {
        printf("It is Not Divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    checkDivisible(iValue);

    return EXIT_SUCCESS;
}