#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No = 14;
    int Ans = 0;

    Ans = No >> 3;      // No >> x  :  No / 2^(x)
    
    printf("%d\n",Ans);

    return EXIT_SUCCESS;
}