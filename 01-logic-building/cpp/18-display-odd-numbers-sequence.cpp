//Program to accept number from user and display Odd numbers 
/*
    Input  :18
    Output :1   3   5   7   9   11  13  15  17
*/

#include<iostream>
using namespace std;

void Odddisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt =1 ;iCnt <=iNo ;iCnt+=2)
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
    Odddisplay(iValue);
    return EXIT_SUCCESS;
}