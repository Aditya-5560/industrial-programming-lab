/*
    Print all capital letters with its decimal(%d),octal(%o),hexadecimal(%x) ascii values
    Changed ascii values to characters for convention
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0;

    for(iCnt = 'A'; iCnt<='Z'; iCnt++)     
    {
        printf("%d\t %o\t %x\t %c\n",iCnt,iCnt,iCnt,iCnt);
    }

    printf("\n");

    return EXIT_SUCCESS;
}