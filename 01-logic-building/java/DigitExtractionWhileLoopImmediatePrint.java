import java.util.Scanner;

class Digit
{
    public void displayDigits()
    {
        int iNo = 9752;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;     

            iNo = iNo /10;  
            
            System.out.println(iDigit);     
            
        }
    }   
}

class DigitExtractionWhileLoopImmediatePrint {
    public static void main(String[] args) 
    {
        Digit digit = new Digit();

        digit.displayDigits();

    }
}
 