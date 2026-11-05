#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void countFrequency(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z') iCountSmall++;
        else if(*str >= 'A' && *str <= 'Z') iCountCapital++;
        else iCountDigit++;                                         //Issue
        str++;
    }
    printf("Small : %d \n",iCountSmall);
    printf("Capital : %d \n",iCountCapital);
    printf("Digit : %d \n",iCountDigit);
}

int main()
{
    char arr[100];

    printf("Enter String : ");
    scanf("%[^'\n']s",arr);

    countFrequency(arr);
    
    return EXIT_SUCCESS;
}