//Calculate Admission Eligibility
/*
Expected
75 18  - Eligible for Admission
55 19  - Not Eligible
80 16  - Not Eligible

Eligibility
Marks at least 60
Age at least 17
*/

#include<stdio.h>
#include<stdlib.h>

void checkAdmission(float fMarks, int iAge)
{
    //Filter
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Enter Vaild Input\n");
    }
    
    if(fMarks >= 60 && iAge >=17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks Obtained and age : ");
    scanf("%f %d",&fMarks,&iAge);

    checkAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}