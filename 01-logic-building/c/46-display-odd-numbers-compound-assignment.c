#include<stdio.h>
#include<stdlib.h>
void display(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt+=2)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the frequency : ");
    scanf("%d",&iValue);
    display(iValue);
    return EXIT_SUCCESS;
}