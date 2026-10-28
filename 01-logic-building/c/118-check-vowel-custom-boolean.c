//Accept a character from user and whether that character is vowel (a,e,i,o,u) or not

#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0
typedef int BOOL;

BOOL chkVowel(char cValue)
{
    if( cValue == 'a' || 
        cValue == 'e' ||
        cValue == 'i' ||
        cValue == 'o' ||
        cValue == 'u'
    )
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = False;

    printf("Enter character : ");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == True)
    {
        printf("It is a vowel\n");
    }
    else
    {
        printf("It is a consonant\n");
    }

    return EXIT_SUCCESS;
}

