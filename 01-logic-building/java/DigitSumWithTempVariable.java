import java.util.Scanner;

class Digit
{
    public int sumDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        //Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo /10; 
        }

        return iSum;
    }   
}

class DigitSumWithTempVariable {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter Number : ");
        int iValue = scanner.nextInt();

        int iRet = digit.sumDigits(iValue);

        System.out.println("Digit sum is : "+iRet);

    }
}
 