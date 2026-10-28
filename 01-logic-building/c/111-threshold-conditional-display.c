//Accept one number from user & if number is less than 10 print "Hello" otherwise print "Demo"

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
