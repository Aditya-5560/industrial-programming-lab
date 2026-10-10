#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////
//
//  Function name : Addition
//  Input         : Integer,Integer        
//  Output        : Integer
//  Description   : Performs addition 
//  Date          : 09/10/2026
//  Author        : Aditya Pradip Salunkhe
//
///////////////////////////////////////////////////

int addition(
                int ino1,                   //First input
                int ino2                    //Second input
            )
{
    int ians = 0;

    ians = ino1+ino2;                       //Business logic

    return ians;
}

///////////////////////////////////////////////////
//
// Entry point of application 
//
///////////////////////////////////////////////////

int main(){
    int iVlaue1=0,iValue2=0,iResult=0;

    printf("Enter 1st no: \n");
    if(scanf("%d",&iVlaue1)!=1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter 2nd no: \n");
    if(scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid\n");

        return EXIT_FAILURE;
    }

    iResult= addition(iVlaue1,iValue2);                 

    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//
// Step 5 - Test the program
// 
//             Tested test cases
// -------------------------------------------
//  Input1          Input2            Output
// -------------------------------------------
//  10                 11               21
//  11                  0               11
//  0                  11               11
//  20                 -9               11
//  -9                 20               11
//  -20               -11              -31
// -------------------------------------------
//
///////////////////////////////////////////////////