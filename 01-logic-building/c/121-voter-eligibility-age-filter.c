//Accept age form user and check whether he is eligible to vote 
//A person must be at least 18 years old to vote

#include<stdio.h>
#include<stdlib.h>

void checkingVotingEligibility(int iAge)
{
    //Filter
    if(iAge <= 0)
    {
        printf("Enter valid age\n");
    }
    
    if(iAge >= 18)
    {
        printf("Eligible for voting\n");
    }
    else
    {
        printf("Not Eligible for voting\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter age : ");
    scanf("%d",&iValue);

    checkingVotingEligibility(iValue);

    return EXIT_SUCCESS;
}