//Accept one number from user and display its even factors including 1 

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

    printf("1\t");
    
    for(iCnt = 2; iCnt<=iNo/2; iCnt+=2)
    {
        if((iNo % iCnt )== 0)
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
