//Program to accept number from user and print 5 multiples of n
/*
    Input  :4
    Output :4   8   12  16  20
*/

#include<iostream>
using namespace std;

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt =iNo ;iCnt <=iNo*5 ;iCnt=iCnt+iNo)
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
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}