import java.util.Scanner;

class Digit
{
    public void displayDigits(int iNo)
    {
        int iDigit = 0;

        //Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;     

            iNo = iNo /10; 
            
            System.out.println(iDigit);     
            
        }
    }   
}

class DigitExtractionInputUpdaterAbs {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        digit.displayDigits(iValue);

    }
}
 