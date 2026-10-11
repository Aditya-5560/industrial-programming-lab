import java.util.Scanner;

class UserInputScannerTokenBufferIssue 
{
    public static void main(String[] args) {
        
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f;                             

        scanner = new Scanner(System.in);

        System.out.println("Enter your name : ");
        sName = scanner.next();                         //Exception as of input buffer when we give full name as input in which string after space is in the buffer


        System.out.println("Enter your age : ");
        iAge = scanner.nextInt();

        System.out.println("Enter your marks : ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome "+sName);
        System.out.println("Your age is : "+iAge);
        System.out.println("Your marks : "+fMarks);

    }
}
