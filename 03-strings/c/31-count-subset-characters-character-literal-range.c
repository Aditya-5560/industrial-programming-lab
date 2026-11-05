#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'd')
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

    iRet = count(arr);

    printf("Occurances of a,b,c,d : %d\n",iRet);
    
    return EXIT_SUCCESS;
}