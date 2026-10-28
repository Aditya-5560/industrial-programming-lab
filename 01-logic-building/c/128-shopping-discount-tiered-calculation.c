//Calculate Shopping Discount
/*
Expected
800  - 800
2000 - 1800
6000 - 4800

                Calculation
+--------------------------+-----------------+
|   Purchase Amount        |   Discount      |
+--------------------------+-----------------+
|   Below ₹1000            |   0%            |
|   ₹1000 to below ₹5000   |   10%           |
|   ₹5000 & above          |   20%           |
+--------------------------+-----------------+
*/

#include<stdio.h>
#include<stdlib.h>

void calculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    //Filter
    if(fAmount <= 0)
    {
        printf("Enter Valid amount\n");
    }

    if(fAmount <= 1000.0f)
    {
        fDiscount = ((0.0f/100.0f) * fAmount);
        
    }
    else if(fAmount <= 5000.0f)
    {
        fDiscount = ((10.0f/100.0f) * fAmount);
    }
    else
    {
        fDiscount = ((20.0f/100.0f) * fAmount);
    }
    fFinalAmount = fAmount - fDiscount;
    printf("Your final payable amount is %f",fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter Purchase Amount : ");
    scanf("%f",&fAmount);

    calculateDiscount(fAmount);

    return EXIT_SUCCESS;
}