#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMarks = 0.0;
    
    printf("Enter your name : ");
    scanf("%[^'\n']s",sName);           //Enter remains in input buffer

    printf("Enter your age : ");
    scanf(" %d",&iAge);                //Space at beginning of format specifier clear buffer(Buffer flushing)

    printf("Enter your marks : ");
    scanf("%f",&fMarks);


    printf("Welcome %s\n",sName);
    printf("Your age is : %d\n",iAge);
    printf("Your marks are : %f\n",fMarks);

    return EXIT_SUCCESS;
}