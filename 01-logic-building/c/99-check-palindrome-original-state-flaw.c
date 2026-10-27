#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkPalindrome(int iNo)
{
    int iRev =0;
    while(iNo != 0)
    {
        iRev = iRev*10 + iNo % 10;
        iNo /= 10;  
    }
    if(iRev == iNo)         //Issue
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = checkPalindrome(iValue);

    if(bRet == true)
    {
        printf("It is a Palindrome\n");
    }
    else
    {
        printf("It is not a Palindrome\n");

    }

    return EXIT_SUCCESS;
}