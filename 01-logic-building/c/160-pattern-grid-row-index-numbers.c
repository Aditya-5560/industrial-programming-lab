/*
    Input  :    iRow = 4
                iCol = 4

    Output :    1   1   1   1
                2   2   2   2
                3   3   3   3
                4   4   4   4
*/  
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRows,int iCols)
{
    int i = 0,j = 0;

    for(i=1; i<=iRows; i++)
    {
        for(j = 1;j<=iCols; j++)
        {
            printf("%d\t",i);
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Rows : ");
    scanf("%d",&iValue1);

    printf("Enter Columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}