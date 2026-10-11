#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    
    printf("Enter your name : ");
    scanf("%[^'\n']s",sName);       //Enter a string until user press enter (not to the first space)

    printf("Welcome %s\n",sName);

    return EXIT_SUCCESS;
}