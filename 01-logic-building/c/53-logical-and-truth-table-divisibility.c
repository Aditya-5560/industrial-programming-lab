/*
    ---------------------------------------------
                  Operation &&
    ---------------------------------------------
    Result1         Result2         Final Result
    ---------------------------------------------
    TRUE            TRUE            TRUE
    TRUE            FALSE           FALSE
    FALSE           TRUE            FALSE           Short Circuit
    FALSE           FALSE           FALSE           Short Circuit
    ---------------------------------------------

*/
#include<stdio.h>
#include<stdlib.h>

void checkDivisible(int iNo)
{
    if(((iNo % 3) == 0)  && ((iNo % 5) == 0))
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is Not Divisible\n");
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