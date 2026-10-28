//Accept one character from user and convert case of that character

#include<stdio.h>
#include<stdlib.h>

//'A' asci value 97
//'a' asci value 65

void displayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", 'a' + (cValue -'A'));
    }
    else
    {
        printf("%c\n",'A'+(cValue -'a'));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : ");
    scanf("%c",&cValue);

    displayConvert(cValue);
    
    return EXIT_SUCCESS;
}