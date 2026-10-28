//Check Divisibility 3 & 5
/*
Expected 
15 - Divisible by Both
9  - Divisible by 3 only
10 - Divisible by 5 only
7  - Not Divisible by Either
*/

#include<stdio.h>
#include<stdlib.h>

void checkMultipleDivisibility(int iNo)
{
    if((iNo % 3 == 0) && (iNo % 5 == 0))
    {
        printf("Divisible by Both\n");
    }
    else if(iNo % 3 == 0)
    {
        printf("Divisible by 3 only\n");
    }
    else if(iNo % 5 == 0)
    {
        printf("Divisible by 5 only\n");
    }
    else
    {
        printf("Not Divisible by Either");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    checkMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}