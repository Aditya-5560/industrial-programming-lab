#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countDigits(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
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

    iRet = countDigits(arr);

    printf("Frequency of Digits : %d\n",iRet);
    
    return EXIT_SUCCESS;
}