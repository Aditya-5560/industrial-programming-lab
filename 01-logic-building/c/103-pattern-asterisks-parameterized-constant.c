//*      *      *       *       *
#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt =0;
    for(iCnt =1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{
    pattern(7);
    return EXIT_SUCCESS;
}