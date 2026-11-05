#include<stdio.h>
#include<stdlib.h>

void display(char *str)
{
    printf("%s\n",str);
}
int main()
{
    char arr[] = "Ganesh";

    display(arr);
    
    return EXIT_SUCCESS;
}