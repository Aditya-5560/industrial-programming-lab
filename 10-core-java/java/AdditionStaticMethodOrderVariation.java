//Approach 3

import java.util.Scanner;

class AdditionStaticMethodOrderVariation 
{
    public static void main(String[] args) 
    {
        Scanner scanner = null;                             
        scanner = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();

        iResult = Arithmatic.Addition(iValue1,iValue2);                          //Business logic
    
        System.out.println("Addition is : "+iResult);
    }
}
class Arithmatic
{
    public static int Addition(int iNo1,int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

