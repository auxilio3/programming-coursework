package week9;

public class PassingArguments {
	
	public static void displayValue(double number) {
		System.out.println("The value is " + number);
	}
	
	public static void showSum(int num1, int num2) {
		System.out.println(num1+num2);
	}
	
	public static void printOrder(String num1, int num2) {
		System.out.println(num1 + " " + num2);
	}

	public static void main(String[] args) {
		
//		double x = 3.05;
//		displayValue(x);
//		displayValue(4.33);
//		displayValue(x*2);
//		displayValue(Math.sqrt(9));
		
		printOrder("Mike", 3);

	}

}
