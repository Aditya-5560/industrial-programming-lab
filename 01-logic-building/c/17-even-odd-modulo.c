#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    if( (ivalue % 2) == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return EXIT_SUCCESS;
}