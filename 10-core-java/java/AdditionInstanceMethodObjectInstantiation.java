//Approach 3

import java.util.Scanner;

class AdditionInstanceMethodObjectInstantiation 
{
    public static void main(String[] args) 
    {
        Scanner scanner = null;
        Arithmatic arithmatic = null;

        scanner = new Scanner(System.in);

        int iValue1 = 0, iValue2 = 0, iResult = 0;

        System.out.println("Enter first number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = scanner.nextInt();
        
        arithmatic = new Arithmatic();
        iResult = arithmatic.Addition(iValue1,iValue2);                          //Business logic
    
        System.out.println("Addition is : "+iResult);
    }
}
class Arithmatic
{
    public int Addition(int iNo1,int iNo2)
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

