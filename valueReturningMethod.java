package week9;

public class valueReturningMethod {
	
	public static int calculateSum(int num1, int num2) {
		int result = num1 + num2;
		return result;
	}

	public static void main(String[] args) {
		
		int number1 = 40;
		int number2 = 60;
		
		int result = calculateSum(number1, number2);
		
		System.out.println("The result is " + result);
		

	}

}
