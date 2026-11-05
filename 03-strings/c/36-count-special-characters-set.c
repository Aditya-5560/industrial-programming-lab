//$#**%&

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countSpecialX(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if
        (   *str == '$' ||
            *str == '#' ||
            *str == '*' ||
            *str == '%' ||
            *str == '&'  
        )
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

    iRet = countSpecialX(arr);

    printf("Frequency of Special letters : %d\n",iRet);
    
    return EXIT_SUCCESS;
}