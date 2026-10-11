#include<stdio.h>
#include<stdlib.h>
void maximum(int iNo1,int iNo2)
{
    if(iNo1 > iNo2)
    {
        printf("Maximum is %d \n",iNo1);
    }
    else
    {
        printf("Maximum is %d \n",iNo2);
    }
}
int main()
{
    int iValue1 =0, iValue2 = 0, iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    maximum(iValue1,iValue2);

    return EXIT_SUCCESS;
}