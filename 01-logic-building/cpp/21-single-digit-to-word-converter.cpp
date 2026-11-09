//Program to accept a single digit number from user and print it in word

/*
    Input  :9
    Output :Nine

    Input  :12
    Output :Invalid
*/

#include<iostream>
using namespace std;


char* Display(int iNo)
{
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    char* cAns = NULL;

    cAns = (char*) malloc(7 * (sizeof(char)) );

    if(cAns == NULL)
    {
        cout<<"Memory allocation failed\n";
    }

    if(iNo == 1) strcpy(cAns,"One\0");
    if(iNo == 2) strcpy(cAns,"Two\0");
    if(iNo == 3) strcpy(cAns,"Three\0");
    if(iNo == 4) strcpy(cAns,"Four\0");
    if(iNo == 5) strcpy(cAns,"Five\0");
    if(iNo == 6) strcpy(cAns,"Six\0");
    if(iNo == 7) strcpy(cAns,"Seven\0");
    if(iNo == 8) strcpy(cAns,"Eight\0");
    if(iNo == 9) strcpy(cAns,"Nine\0");

    if(iNo > 9) strcpy(cAns,"Invalid\0");
    
    return cAns;
}

int main()
{
    int iValue = 0;
    char* iRet = NULL;
    cout<<"Enter number\n";
    cin>>iValue;
    iRet = Display(iValue);

    cout<<iRet<<"\n";

    return EXIT_SUCCESS;
}