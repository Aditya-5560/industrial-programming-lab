/*
    Print all small letters
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 97; iCnt<=122; iCnt++)     
    {
        printf("%c\n",iCnt);
    }

    printf("\n");

    return EXIT_SUCCESS;
}