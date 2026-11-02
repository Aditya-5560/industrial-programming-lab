/*
    Print capital letters upto 'D' with its decimal(%d) ascii values
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = '\0';

    for(ch = 'A'; ch<='D'; ch++)     
    {
        printf("%c\n",ch);
    }

    printf("\n");

    return EXIT_SUCCESS;
}