//5
//1     2       3       4       5
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt =0;
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter the frequency\n");
    scanf("%d",&iValue);

    pattern(iValue);
    
    return EXIT_SUCCESS;
}