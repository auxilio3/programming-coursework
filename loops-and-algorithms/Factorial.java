import java.util.Scanner;

public class Factorial {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		//Prompts user input
		System.out.print("Enter a positive integer.");
		int number = scanner.nextInt();
		
		//Checks if input is valid and if not, prints out error message
		if (number < 0) {
			System.out.println("Error: Please enter a positive integer.");
		} else {
			int factorial = 1;
			
			//Calculates factorial using the for loop
			for (int i = 1; i <= number; i++) {
				factorial *= i;
			}
			
			//Displays result
			System.out.println("The factorial of " + number + " is " + factorial + ".");
		}
		
		
		scanner.close();
		
		

	}

}
