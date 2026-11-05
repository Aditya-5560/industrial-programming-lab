#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int countvowels(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if
        ( 
            *str == 'A' || *str == 'a'  ||
            *str == 'E' || *str == 'e'  ||
            *str == 'I' || *str == 'i'  ||
            *str == 'O' || *str == 'o'  ||
            *str == 'U' || *str == 'u'
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

    iRet = countvowels(arr);

    printf("Occurances of vowels is : %d\n",iRet);
    
    return EXIT_SUCCESS;
}