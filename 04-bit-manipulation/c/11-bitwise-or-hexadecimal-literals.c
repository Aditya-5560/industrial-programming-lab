#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0xAD56;
    int No2 = 0xFD77;
    int ans = 0;

    ans = No1 | No2;      
    
    printf("%d\n",ans);         

    return EXIT_SUCCESS;
}