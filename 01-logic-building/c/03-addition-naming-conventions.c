/*
    Step1 - Understand Problem Statement
    Step2 - Write the algorithm
    Step3 - Decide Programming language
    Step4 - Write the program
    Step5 - Test the program
*/
//////////////a/////////////////////////////////////
//
// Step 1 - Understand the problem statement       
//          User is going to enter any 2 integers 
//          and we have have to perform addition
//
///////////////////////////////////////////////////
//
// Step 2 - Write the algorithm
/*
    START
        Accept 1st no as no1
        Accept 2nd no as no2
        Create the variable as ans to store the result
        Perform the addition and store into ans
        Display the result from ans
    END
*/
///////////////////////////////////////////////////
//
// Step 3 - Decide Programming language
//          We Select C programming
//
///////////////////////////////////////////////////
//
// Step 4 - Write the program
//
///////////////////////////////////////////////////

#include<stdio.h>

int main(){
    int iVlaue1 = 10,iValue2 = 11,iResult = 0;
    iResult=iVlaue1+iValue2;                  //Business logic
    printf("%d\n",iResult);
    return 0;
}