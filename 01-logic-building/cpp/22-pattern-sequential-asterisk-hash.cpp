/*
Input  : 5
Output : *  *   *   *   *   #   #   #   #   #

Input  : -4
Output : *  *   *   *   #   #   #   #
*/

#include<iostream>
using namespace std;

void display(int iNo)
{
    //Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter number : ";
    cin>>iValue;

    display(iValue);

    return EXIT_SUCCESS;
}