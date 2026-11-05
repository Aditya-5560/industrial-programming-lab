#include<stdio.h>
#include<stdlib.h>

void display(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char arr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    display(arr);
    
    return EXIT_SUCCESS;
}