#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : checkeven
//  Input         : Integer        
//  Output        : Void
//  Description   : Checks number is even or odd
//  Date          : 09/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////
void checkeven(
                int ino
              )
{
    if( (ino&2) == 0 )                          //Business Logic
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    checkeven(ivalue);

    return EXIT_SUCCESS;
}