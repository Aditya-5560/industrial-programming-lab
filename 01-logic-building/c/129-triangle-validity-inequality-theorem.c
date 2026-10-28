//Check Traingle Validity
/*
3 4 5   - Vaild Traingle
1 2 3   - Invalide Traingle
0 4 5   - Invalid Triangle

Validity 
All sides positive
Sum of any 2 greater than third side
*/

#include<stdio.h>
#include<stdlib.h>

void checkTriangle(int iSide1,int iSide2, int iSide3)
{
    //Filter
    if(iSide1 <= 0 || iSide2 <= 0 || iSide3 <=0)
    {
        printf("Invalid Triangle\n");
        return;
    }

    if( iSide2 + iSide3 > iSide1 && 
        iSide1 + iSide3 > iSide2 && 
        iSide1 + iSide2 > iSide3
    )
    {
        printf("Valid Traingle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
    
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three Sides : ");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    checkTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}