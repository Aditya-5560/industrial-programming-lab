/*
Km to meters
1KM = 1000 m
*/

#include<stdio.h>
#include<stdlib.h>

int KMtoMeters(int iNo)
{
    int iAns = 1000 * iNo;

    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeters(iValue);

    printf("Meters : %d\n",iRet);

    return EXIT_SUCCESS;
}