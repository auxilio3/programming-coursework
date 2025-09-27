package week9;

public class Calculator {

	public static void main(String[] args) {
	add(5,7);
	subtraction(4,3);
	multiply(5,6);
	divide(5,2);
	}
	
	public static void add(int num1, int num2) {
		int result = num1 + num2;
		System.out.println(result);
	}

	public static void subtraction(int num1, int num2) {
		int result = num1 - num2;
		System.out.println(result);
	}
	
	public static void multiply(int num1, int num2) {
		int result = num1 * num2;
		System.out.println(result);
	}
	
	public static void divide(int num1, int num2) {
		int result = num1 / num2;
		System.out.println(result);
	}
		
	}
	

