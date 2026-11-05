#include<stdio.h>
#include<stdlib.h>

void display(char *str)
{
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char arr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    display(arr);
    
    return EXIT_SUCCESS;
}