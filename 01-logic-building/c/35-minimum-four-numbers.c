#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : minimum
//  Input         : Integer,Integer,Integer,Integer        
//  Output        : Integer
//  Description   : minimum of 4 number
//  Date          : 11/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////
int minimum(int iNo1,int iNo2,int iNo3,int iNo4)
{
    if(iNo1 < iNo2 && iNo1 < iNo3 && iNo1 < iNo4)
    {
        return iNo1;
    }
    else if(iNo2 < iNo1 && iNo2 < iNo3 && iNo2 < iNo4)
    {
        return iNo2;
    }
    else if(iNo3 < iNo1 && iNo3 < iNo2 && iNo3 < iNo4)
    {
        return iNo3;
    }
    else
    {
        return iNo4;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0,iValue3 = 0,iValue4 = 0;
    int iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    printf("Enter Third number : ");
    scanf("%d",&iValue3);

    printf("Enter forth number : ");
    scanf("%d",&iValue4);

    iResult = minimum(iValue1,iValue2,iValue3,iValue4);
 
    printf("Minimum is : %d \n",iResult);

    return EXIT_SUCCESS;
}