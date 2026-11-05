#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countcapitalX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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

    iRet = countcapitalX(arr);

    printf("Occurances of capital letters : %d\n",iRet);
    
    return EXIT_SUCCESS;
}