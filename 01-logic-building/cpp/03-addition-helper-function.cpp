#include<iostream>
using namespace std;

int addition(int iNo1,int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;

    iRet = addition(iValue1,iValue2);

    cout<<"Addition : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}