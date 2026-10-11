#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : minimum
//  Input         : Integer,Integer        
//  Output        : Integer
//  Description   : Returns minimum number
//  Date          : 11/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////

int minimum(int iNo1,int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int iValue1 =0, iValue2 = 0, iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    iResult = minimum(iValue1,iValue2);
 
    printf("Minimum is : %d \n",iResult);

    return EXIT_SUCCESS;
}