/*
Convert $ to ₹ 
Conversion 1$ = 7₹

Input  : 3
Output : 210

Input  : 10
Output : 700
*/

#include<iostream>
using namespace std;

int dollerToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter amount in $ : ";
    cin>>iValue;

    iRet = dollerToINR(iValue);

    printf("Amount in ₹ is %d\n",iRet);

    return EXIT_SUCCESS;
}