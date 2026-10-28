//Calculate Employee Bonus
/*
30000 12  - 4500.00
20000 7   - 2000.00
10000 2   - 500.00

Rules
10 year+     -  15% bonus
5-10 year    -  10% bonus
less than 5  -  5% bonus
*/

#include<stdio.h>
#include<stdlib.h>

void calculateBonus(float fSalery,int iYears)
{
    //Filter
    if(fSalery < 0 || iYears <0)
    {
        printf("Invalid Inputs\n");
        return;
    }

    float fBonus = 0.0f;
    if(iYears < 5)
    {
        fBonus = (5.0f/100.0f) * fSalery;
    }
    else if(iYears < 10)
    {
        fBonus = (10.0f/100.0f) * fSalery;
    }
    else
    {
        fBonus = (15.0f/100.0f) * fSalery;
    }

    printf("Bonus id %f\n",fBonus);
    
}

int main()
{
    float fSalery = 0.0f;
    int iYears = 0;

    printf("Enter Salery & Years of service : ");
    scanf("%f %d",&fSalery, &iYears);

    calculateBonus(fSalery,iYears);

    return EXIT_SUCCESS;
}