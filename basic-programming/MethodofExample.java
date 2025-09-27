package week9;

public class MethodofExample {

	public static void displayMessage() {
		System.out.println("This is a method!");

	}
	
	public static void changeValue(int num) {
		num = 50;
		System.out.println(50);
	}
	
	public static void main(String[] args) {
		displayMessage();
		int number = 5;
		changeValue(number);
		System.out.println(number);
	}

}
