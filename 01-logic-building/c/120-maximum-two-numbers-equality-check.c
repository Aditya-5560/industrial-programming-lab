//Find greater of 2 numbers

#include<stdio.h>
#include<stdlib.h>

void findGreater(int iFirst,int iSecond)
{
    if(iFirst == iSecond)
    {
        printf("Both numbers are equal\n");
    }
    else if(iFirst > iSecond)
    {
        printf("First Number is Greater\n");
    }
    else
    {
        printf("Second Number is Greater\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    findGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}