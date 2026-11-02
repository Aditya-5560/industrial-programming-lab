/*
    Print all capital letters with its decimal ascii values
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt<=90; iCnt++)     
    {
        printf("%d\t %c\n",iCnt,iCnt);
    }

    printf("\n");

    return EXIT_SUCCESS;
}