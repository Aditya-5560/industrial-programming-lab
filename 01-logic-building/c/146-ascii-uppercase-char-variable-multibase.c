/*
    Print all capital letters with its decimal(%d),octal(%o),hexadecimal(%x) ascii values
    used char ch 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = '\0';

    for(ch = 'A'; ch<='Z'; ch++)     
    {
        printf("%d\t %o\t %x\t %c\n",ch,ch,ch,ch);
    }

    printf("\n");

    return EXIT_SUCCESS;
}