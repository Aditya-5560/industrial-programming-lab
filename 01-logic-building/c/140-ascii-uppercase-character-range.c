/*
    Print all capital letters
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt<=90; iCnt++)     
    {
        printf("%c\n",iCnt);
    }

    printf("\n");

    return EXIT_SUCCESS;
}