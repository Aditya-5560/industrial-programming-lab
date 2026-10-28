//Check whether given year is leap year or not
//Year above 1582
//Leap if exactly divisible by 4 
//Not leap if exactly divisible by 100

//Leap if exactly divisible by 400

#include<stdio.h>
#include<stdlib.h>

void checkleapYear(int iYear)
{
    //Filter
    if(iYear < 1582)
    {
        printf("Enter a Year from 1582 onwards");
    }

    if((iYear % 400 == 0 ) || (iYear % 4 == 0 && iYear % 100 != 0) )
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a leap year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter a Year : ");
    scanf("%d",&iYear);

    checkleapYear(iYear);

    return EXIT_SUCCESS;
}