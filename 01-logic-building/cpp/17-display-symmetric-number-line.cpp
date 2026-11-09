//Program to accept number from user and display number line 
/*
    Input  :4
    Output :-4  -3  -2  -1  0   1   2   3   4
*/

#include<iostream>
using namespace std;

void display(int iNo)
{
    int iCnt = 0;
    for(iCnt =-iNo ;iCnt <=iNo ;iCnt++)
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