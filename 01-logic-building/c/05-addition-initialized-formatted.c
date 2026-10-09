/*
    Step1 - Understand Problem Statement
    Step2 - Write the algorithm
    Step3 - Decide Programming language
    Step4 - Write the program
    Step5 - Test the program
*/
///////////////////////////////////////////////////
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
    int iVlaue1=0,iValue2=0,iResult=0;

    printf("Enter 1st no: \n");
    scanf("%d",&iVlaue1);

    printf("Enter 2nd no: \n");
    scanf("%d",&iValue2);

    iResult=iVlaue1+iValue2;                  //Business logic

    printf("Addition is : %d\n",iResult);
    
    return 0;
}