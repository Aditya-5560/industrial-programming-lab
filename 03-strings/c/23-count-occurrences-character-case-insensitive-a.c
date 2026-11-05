#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    iRet = countX(arr);

    printf("Occurances of a is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}