#include<iostream>
using namespace std;

double addition(double No1,double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    double iValue1 = 0.0, iValue2 = 0.0; 
    double iRet = 0.0;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;

    iRet = addition(iValue1,iValue2);

    cout<<"Addition : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}