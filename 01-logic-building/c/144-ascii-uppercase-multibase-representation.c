/*
    Print all capital letters with its decimal(%d),octal(%o),hexadecimal(%x) ascii values
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 65; iCnt<=90; iCnt++)     
    {
        printf("%d\t %o\t %x\t %c\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("\n");

    return EXIT_SUCCESS;
}