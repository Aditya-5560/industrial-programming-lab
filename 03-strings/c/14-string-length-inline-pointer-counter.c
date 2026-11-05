#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int iCount = 0;

    char arr[20] = "Jay Ganesh";

    char* ptr = NULL;

    ptr = &(arr[0]);

    while(*ptr != '\0')
    {
        iCount++;
        ptr++;
    }
    
    printf("%d\n",iCount);

    return EXIT_SUCCESS;
}