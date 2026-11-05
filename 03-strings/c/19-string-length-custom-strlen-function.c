#include<stdio.h>
#include<stdlib.h>

int strlenX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        iCount++;
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

    iRet = strlenX(arr);

    printf("Length of string is %d\n",iRet);
    
    return EXIT_SUCCESS;
}