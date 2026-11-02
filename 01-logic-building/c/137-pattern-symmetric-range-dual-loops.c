/*
    Input  :    4
    Output :    -4   -3   -2   -1   0   1   2   3   4
*/
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt<0; iCnt++)           //O(N)
    {
        printf("%d\t",iCnt);
    }

    for(iCnt = 0; iCnt<=iNo; iCnt++)           //O(N)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}
//Time Complexity O(2N)

int main()
{
    int iValue = 0;

    printf("Enter the value: ");
    scanf("%d",&iValue);

    pattern(iValue);

    return EXIT_SUCCESS;
}