/*
Squarefeet to square meters
1 squarefeet = 0.0929 square meters 
*/

#include<stdio.h>
#include<stdlib.h>

double squareMeters(int iValue)
{
    double iAns = (0.0929 * iValue);

    return iAns;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Squarefeet : ");
    scanf("%d",&iValue);

    dRet = squareMeters(iValue);

    printf("Area in Squaremeters : %f\n",dRet);

    return EXIT_SUCCESS;
}