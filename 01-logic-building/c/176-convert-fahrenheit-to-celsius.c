/*
Fahrenheit to Celsius
1C = (Fahrenheit-32) * (5/9) 
*/

#include<stdio.h>
#include<stdlib.h>

double FhToCs(float fTemp)
{
    double iAns = ((double)fTemp-32.0)*(5.0/9.0);

    return iAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Celsius : %f\n",dRet);

    return EXIT_SUCCESS;
}