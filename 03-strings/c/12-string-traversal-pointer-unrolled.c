#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char arr[10] = "Ganesh";

    char* ptr = NULL;

    ptr = &(arr[0]);

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;

    printf("%c\n",*ptr);
    ptr++;



    return EXIT_SUCCESS;
}