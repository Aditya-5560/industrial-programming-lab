#include"Header.h"

///////////////////////////////////////////////////
//
// Entry point of application 
//
///////////////////////////////////////////////////

int main()
{
    int iVlaue1=0,iValue2=0,iResult=0;

    printf("Enter 1st no: \n");
    if(scanf("%d",&iVlaue1)!=1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid\n");

        return EXIT_FAILURE;
    }

    printf("Enter 2nd no: \n");
    if(scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"Unable to proceed as Input is Invalid\n");

        return EXIT_FAILURE;
    }

    iResult= addition(iVlaue1,iValue2);                 

    printf("Addition is : %d\n",iResult);
    
    return EXIT_SUCCESS;
}