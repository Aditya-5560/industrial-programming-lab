//Program to accept number from user and print pattern
/*
    Input  :4
    Output :$   *   $   *   $   *   $   *
*/

#include<iostream>
using namespace std;

void pattern(int iNo)
{
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt =1 ;iCnt <=iNo ;iCnt++)
    {
        cout<<"$\t*\t";
    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    pattern(iValue);
    return EXIT_SUCCESS;
}