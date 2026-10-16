#include<stdio.h>
#include<stdlib.h>
void display(int iNo)
{
    int iCnt = 0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t*\n",iCnt);
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