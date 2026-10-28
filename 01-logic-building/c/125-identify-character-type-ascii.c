//Identify Character Type
/*
Expected
A   - Uppercase Alphabet
m   - Lowercase Alphabet
7   - Digit
@   - Special Character

        Ascii Values
+------------+------------+
|   65-90    |   A to Z   |
|   97-122   |   a to z   |
|   48-57    |   1 to 9   |
+------------+------------+
*/

#include<stdio.h>
#include<stdlib.h>

void checkCharacterType(char cValue)
{
    if(cValue >= 65 && cValue <= 65+25)
    {
        printf("Uppercase Alphabet\n");
    }
    else if(cValue >= 97 && cValue <= 97+25)
    {
        printf("Lowercase Alphabet\n");
    }
    else if(cValue >= 48 && cValue <= 48+9)
    {
        printf("Digit\n");
    }else
    {
        printf("Special Character\n");
    } 
}

int main()
{
    char cValue = 0;

    printf("Enter a Character : ");
    scanf("%c",&cValue);

    checkCharacterType(cValue);

    return EXIT_SUCCESS;
}