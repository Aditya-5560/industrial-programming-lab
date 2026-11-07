#include<iostream>
using namespace std;

float addition(float iNo1,float iNo2)
{
    float iAns = 0.0f;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    float iValue1 = 0.0f, iValue2 = 0.0f; 
    float iRet = 0.0f;

    cout<<"Enter first number : ";
    cin>>iValue1;

    cout<<"Enter second number : ";
    cin>>iValue2;

    iRet = addition(iValue1,iValue2);

    cout<<"Addition : "<<iRet<<"\n";

    return EXIT_SUCCESS;
}