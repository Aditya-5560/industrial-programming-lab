//Program to accept number from user and display numbers 
/*
    Input  :6
    Output :1   2   3   4   5   6
*/

#include<iostream>
using namespace std;

void display(int iNo)
{
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt =1 ;iCnt <=iNo ;iCnt++)
    {
        cout<<iCnt<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int iValue = 0;
    cout<<"Enter number\n";
    cin>>iValue;
    display(iValue);
    return EXIT_SUCCESS;
}