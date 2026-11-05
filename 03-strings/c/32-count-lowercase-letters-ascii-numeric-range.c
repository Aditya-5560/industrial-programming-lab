#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countsmall(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
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

    iRet = countsmall(arr);

    printf("Occurances of small letters : %d\n",iRet);
    
    return EXIT_SUCCESS;
}