#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(iNo % 3 == 0)
    {
        printf("It is Divisible by 3\n");
    }
    else
    {
        printf("It is Not Divisible by 3\n");
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