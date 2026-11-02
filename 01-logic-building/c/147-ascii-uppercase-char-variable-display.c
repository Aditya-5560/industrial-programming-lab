/*
    Print all capital letters with its decimal(%d) ascii values
    used char ch 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = '\0';

    for(ch = 'A'; ch<='Z'; ch++)     
    {
        printf("%c\n",ch);
    }

    printf("\n");

    return EXIT_SUCCESS;
}