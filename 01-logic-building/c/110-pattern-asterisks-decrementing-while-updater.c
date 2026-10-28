//Accept one number from user and print that number of stars (*)
//Aslo add updater & using while in decreasing order

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    //Updater
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        printf("*\t");
        iNo--;
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
