import java.util.Scanner;

public class SumOfEvenNumbers {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		//Prompts user input
		System.out.print("Enter a positive integer: ");
		int number = scanner.nextInt();
		
		//Checks if input is valid
		if (number <= 0) {
			System.out.println("Error: Please enter a positive integer.");
		} else {
			int sum = 0;
			int i = 1;
			
		//Calculates sum of even numbers using the while loop
			while (i <= number) {
				if (i % 2 == 0) { //Checks that input is even
					sum += i;
				}
				i++;
			}
			
			System.out.println("The sum of even numbers from 1 to " + number + " is " + sum + ".");
		}
		
		scanner.close();

	}

}
