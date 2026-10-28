//Accept one number from user and display its even factors excluding 1 

#include<stdio.h>
#include<stdlib.h>

void displayFactors(int iNo)
{
    //Updater 
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        if(((iCnt % 2 )== 0) && ((iNo % iCnt )== 0))
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    displayFactors(iValue);

    return EXIT_SUCCESS;
}
