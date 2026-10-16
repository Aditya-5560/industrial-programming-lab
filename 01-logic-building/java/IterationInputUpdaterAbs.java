import java.util.Scanner;
class Iteration
{
    public void display(int iNo)
    {
        int iCnt = 0;

        //Input Updater
        if(iNo<=0)
        {
            iNo = -iNo;
        }

        for(iCnt = 1; iCnt<=iNo; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}
class IterationInputUpdaterAbs 
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;

        Iteration iteration = new Iteration();
        
        System.out.println("Enter the frequency : ");
        iValue = scanner.nextInt();

        iteration.display(iValue);

    }
}

