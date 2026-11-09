/*
Accept Height and Width and return area of rectangle
area = Height * Width
*/

#include<stdio.h>
#include<stdlib.h>

double RectangleArea(float fWidth,float fHeight)
{
    double dAns = (double)fWidth * (double)fHeight;

    return dAns;
}

int main()
{
    float fValue1 = 0.0f;
    float fValue2 = 0.0f;

    double dRet = 0.0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of Rectangle : %.4lf\n",dRet);

    return EXIT_SUCCESS;
}