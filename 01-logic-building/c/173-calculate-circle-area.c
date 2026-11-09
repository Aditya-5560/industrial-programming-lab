/*
Accept radius and return area
area = PI * Radius * Radius
PI = 3.14
*/

#include<stdio.h>
#include<stdlib.h>

#define PI 3.14

double circleArea(float fRadius)
{
    double dAns = PI * (double)fRadius * (double)fRadius;

    return dAns;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = circleArea(fValue);

    printf("Area of circle : %.4lf\n",dRet);

    return EXIT_SUCCESS;
}