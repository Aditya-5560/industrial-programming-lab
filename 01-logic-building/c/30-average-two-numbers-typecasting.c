#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : average
//  Input         : Integer,Integer        
//  Output        : Float
//  Description   : Returns Average of 2 number
//  Date          : 11/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////
float average(int iNo1,int iNo2)
{
    float fAns = ((float)iNo1 + (float)iNo2)/2;       //Typcasting int to float
    return fAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    fResult = average(iValue1,iValue2);
 
    printf("Average is : %f \n",fResult);

    return EXIT_SUCCESS;
}