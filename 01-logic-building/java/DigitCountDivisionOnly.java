import java.util.Scanner;

class Digit
{
    public int countDigits(int iNo)
    {
        int iCount = 0;

        //Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iNo = iNo /10; 
            iCount++;
        }

        return iCount;
    }   
}

class DigitCountDivisionOnly {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        int iRet = digit.countDigits(iValue);

        System.out.println("The number has "+iRet+" Digits");

    }
}
 