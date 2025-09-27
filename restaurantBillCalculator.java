package week9;

import java.util.Scanner;

public class restaurantBillCalculator {

	public static void displayBill(double mealPrice, double taxAmount, double tipAmount, double Total) {
		System.out.printf("Tax: $%.2f%n", taxAmount);
		System.out.printf("Tax: $%.2f%n", tipAmount);
		System.out.printf("Tax: $%.2f%n", Total);
	}
	
		public static void main (String[] args) {
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter the price of the meal: ");
		double mealPrice = scanner.nextDouble();
		
		double taxRate = scanner.nextDouble();
		System.out.println("Enter the tax rate(percentage): ");
		
		System.out.println("Enter the tip percentage: ");
		double tipPercentage = scanner.nextDouble();
		
		double taxAmount = calculateTax(mealPrice, taxRate);
		double mealPriceAfterTax = mealPrice + taxAmount;
		double tipAmount = calculateTip(mealPriceAfterTax, tipPercentage);
		double Total = calculateTotal(mealPrice, taxAmount, tipAmount);
		
		displayBill(mealPrice, taxAmount, tipAmount, Total);
		scanner.close();
		
	}
	
	public static double calculateTax(double mealPrice, double taxRate) {
		return mealPrice * (taxRate/100);
	}
	
	public static double calculateTip(double mealPriceAfterTax, double tipPercentage) {
		return mealPriceAfterTax * (tipPercentage/100);
	}
	
	public static double calculateTotal(double mealPrice, double taxAmount, double tipAmount) {
		return mealPrice + taxAmount + tipAmount;
	
	
	}
}

