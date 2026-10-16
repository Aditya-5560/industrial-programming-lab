class Iteration
{
    public void display()
    {
        int iCnt = 0;
        for(iCnt = 1; iCnt<=4; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}
class IterationForLoopFixedCount 
{
    public static void main(String[] args)
    {
        Iteration iteration = new Iteration();
        iteration.display();
    }
}

