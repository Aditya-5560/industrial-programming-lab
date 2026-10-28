//Calculate Student Grades
/*
+-----------+------------+
|   Marks   |    Grades  |
+-----------+------------+
|   90-100  |      A     |
|   75-89   |      B     |
|   60-74   |      C     |
|   40-59   |      D     |
|  Below40  |     Fail   |
+-----------+------------+
*/

#include<stdio.h>
#include<stdlib.h>

void displayGrade(float fMarks)
{
    //Filter
    if(fMarks < 0 || fMarks > 100)
    {
        printf("Invalid Marks\n");
    }

    if(fMarks >= 90 && fMarks <=100)
    {
        printf("Grade A\n");
    }
    else if(fMarks >= 75 && fMarks <=89)
    {
        printf("Grade B\n");
    }
    else if(fMarks >= 60 && fMarks <=74)
    {
        printf("Grade C\n");
    }
    else if(fMarks >= 40 && fMarks <=59)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Maeks : ");
    scanf("%f",&fMarks);

    displayGrade(fMarks);

    return EXIT_SUCCESS;
}