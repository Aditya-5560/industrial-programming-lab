#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned int No = 14;
    unsigned int Ans = 0;

    Ans = ~ No;      
    
    printf("%d\n",Ans);         //-15

    return EXIT_SUCCESS;
}