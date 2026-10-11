import java.util.Scanner;

class UserInputScannerHungarianNaming 
{
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String sName = scanner.nextLine();

        System.out.println("Welcome "+sName);  

    }
}
