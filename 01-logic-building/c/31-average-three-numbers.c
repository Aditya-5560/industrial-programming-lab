#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : average
//  Input         : Integer,Integer,Integer        
//  Output        : Float
//  Description   : Returns Average of 2 number
//  Date          : 11/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////
float average(int iNo1,int iNo2,int iNo3)
{
    float fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3)/3;       //Typcasting int to float
    return fAns;
}
int main()
{
    int iValue1 = 0, iValue2 = 0,iValue3 = 0;
    float fResult = 0.0f;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    printf("Enter Third number : ");
    scanf("%d",&iValue3);

    fResult = average(iValue1,iValue2,iValue3);
 
    printf("Average is : %f \n",fResult);

    return EXIT_SUCCESS;
}