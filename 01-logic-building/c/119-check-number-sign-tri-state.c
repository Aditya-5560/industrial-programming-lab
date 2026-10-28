//Check whether number is positive or negative

#include<stdio.h>
#include<stdlib.h>

void checkNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("Number is Zero\n");
    }
    else if(iNo > 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    checkNumber(iValue);

    return EXIT_SUCCESS;
}