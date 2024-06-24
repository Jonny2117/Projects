/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java. util.Scanner; 
public class Main
{
	public static void main(String[] args) {
        System.out.println("Yen Currency Converter");
        System.out.println("1 Dollar");
        System.out.println("2 Euro");
        System.out.println("3 Peso");
        
        // take input
        Scanner sc = new Scanner(System.in);
        System.out.println("Choose the Currency You Would Like To Convert From");
        int choice = sc.nextInt();
        System.out.println("Enter the amount");
        double amount = sc.nextDouble();
        
        switch (choice) {
            case 1:
                Yen_to_dollar(amount);
                break;
            case 2:
                Yen_to_euro(amount);
                break;
            case 3:
                Yen_to_peso(amount);
                break;
            default:
                System. out.println("Invalid choice");
	}
}

public static void Yen_to_dollar(double amt) {
    System.out.println("1 Yen = " + 0.0063 + " Dollar");
    System.out.println();

    System.out.println(amt+" Yen = " + (amt*0.0063) + " Dollar");
    System.out.println();
}

public static void Yen_to_euro(double amt) {
    System.out.println("1 Yen = " + 0.0058 + " Euro");
    System.out.println();

    System.out.println(amt+" Yen = " + (amt*0.0058) + " Euro");
    System.out.println();
}
public static void Yen_to_peso(double amt) {
    System.out.println("1 Yen = " + 0.11 + " Peso");
    System.out.println();

    System.out.println(amt+" Yen = " + (amt*0.11) + " Peso");
    System.out.println();
}
}