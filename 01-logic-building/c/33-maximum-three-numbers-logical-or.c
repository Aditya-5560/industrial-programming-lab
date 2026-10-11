#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : maximum
//  Input         : Integer,Integer,Integer        
//  Output        : Integer
//  Description   : Maximum of 3 number
//  Date          : 11/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////
int maximum(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 > iNo2 || iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo3 || iNo2 > iNo1)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0,iValue3 = 0;
    int iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    printf("Enter Third number : ");
    scanf("%d",&iValue3);

    iResult = maximum(iValue1,iValue2,iValue3);
 
    printf("Maximum is : %d \n",iResult);

    return EXIT_SUCCESS;
}