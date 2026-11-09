//Program to accept number from user and print 

//Small if no less than 50
//Medium if no is 50-100
//Large if no is 100+

/*
    Input  :75
    Output :Medium
*/

#include<iostream>
using namespace std;


char* Number(int iNo)
{
    char* cAns = NULL;

    cAns = (char*) malloc(7 * (sizeof(char)) );

    if(cAns == NULL)
    {
        cout<<"Memory allocation failed\n";
    }

    if(iNo < 50)
    {
        strcpy(cAns,"Small\0");
    }
    if(iNo >= 50 && iNo <= 100)
    {
        strcpy(cAns,"Medium\0");
    }
    if(iNo >= 100)
    {
        strcpy(cAns,"Large\0");
    }
    return cAns;
}

int main()
{
    int iValue = 0;
    char* iRet = NULL;
    cout<<"Enter number\n";
    cin>>iValue;
    iRet = Number(iValue);

    cout<<iRet<<"\n";

    return EXIT_SUCCESS;
}