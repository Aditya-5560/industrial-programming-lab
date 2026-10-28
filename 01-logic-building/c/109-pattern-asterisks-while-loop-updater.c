//Accept one number from user and print that number of stars (*)
//Aslo add updater & using while in increading order

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Updater
    if(iNo<0)
    {
        iNo = -iNo;
    }
    iCnt = 1;
    while(iCnt<=iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
