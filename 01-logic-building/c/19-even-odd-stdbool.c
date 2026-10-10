#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////
//
//  Function name : checkeven
//  Input         : Integer       
//  Output        : Boolean (bool) from stdbool.h
//  Description   : Checks number is even or odd
//  Date          : 09/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////
bool checkeven(
                int ino
              )
{
    if( (ino&2) == 0 )                          //Business Logic
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    bRet = checkeven(ivalue);

    if(bRet==true)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return EXIT_SUCCESS;
}