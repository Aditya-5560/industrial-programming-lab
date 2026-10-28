//Calculate Electricity Bill
/*
Expected
80  - 400
150 - 850
250 - 1700

                Calculation
+--------------------+-----------------+
|   First 100 units  |   ₹5 per unit   |
|   Next 100 units   |   ₹7 per unit   |
|   Above 200 units  |   ₹10 per unit  |
+--------------------+-----------------+
*/

#include<stdio.h>
#include<stdlib.h>

void checkElectricityBill(int iUnits)
{
    //Filter
    if(iUnits <= 0)
    {
        printf("Enter Vaild Units\n");
    }
    
    float fBill = 0.0f;
    if(iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits-100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }
    printf("Your total bill is %f",fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter Consumed Units : ");
    scanf("%d",&iUnits);

    checkElectricityBill(iUnits);

    return EXIT_SUCCESS;
}